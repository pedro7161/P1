#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
// Programa Ref_063_fichEscreverFile

// Aten��o
// Correr este programa no Dev-C++ devido as incompatibilidades dos
// comandos padr�o de ficheiros com os mesmos comandos da microsoft

// Introdu��o aos ficheiros

// escreve caracteres num ficheiro


/*
   At� ao momento, todos os dados t�m sido inseridos nos programas atrav�s do 
   teclado, sendo guardados em vari�veis, as quais residem em mem�ria central 
   (RAM - mem�ria prim�ria e vol�til).

   Esta apresenta inconvenientes de ser vol�til e cara, pelo que n�o se torna 
   interessante para o armazenamento durante periodos que excedam o de execu��o 
   de um programa. 

   Para armazenamentos mais demorados � utilizado outro meio, a mem�ria secund�ria 
   (disco r�gido), em que a informa��o � armazenada sob a forma de ficheiros. 
   
   A linguagem C permite dois tipos de ficheiros : bin�rio ou texto. 

   Ficheiros bin�rios s�o destinados principalmente para o armazenamento de 
   registos (estruturas).    
    
   Ficheiros de texto s�o destinados principalmente para o armazenamento de 
   texo normal (byte-a-byte, ou seja, caracter-a-caracter).  


   Abertura e Fecho de Ficheiros 

   O ficheiro stdio.h cont�m defini��es e declara��es necess�rias �s fun��es standards 
   de manipula��o de ficheiros. 
      
   Nos programas em linguagem C um ficheiro � especificado em termos de um apontador para 
   um FILE que � obtido pela chamada � fun��o fopen.
 
   O utilizador n�o necessita conhecer os membros de uma estrutura FILE. 
   A sintaxe da fun��o de abertura de ficheiros num programa em C �: 

   FILE *fopen(char nome_do_ficheiro[], char modo[]); 

   A fun��o fopen() devolve um apontador para um FILE, que passa a ser utilizado 
   em todos os acessos ao ficheiro. O primeiro argumento � o nome do ficheiro a ser aberto. 
 
   O segundo argumento � o modo de abertura. 
   Algumas das possibilidades para o argumento modo s�o: 

   r: Abertura para leitura.D� erro se o ficheiro n�o existe. 

   w: Abertura para escrita.Se o ficheiro existir o conte�do � apagado. 
      Se n�o existir, o ficheiro � criado. 

   a: Abertura para adi��o no fim do ficheiro.Se este existir ent�o os novos dados   
      ser�o escritos no fim do ficheiro.Se o ficheiro n�o existir ent�o ser� criado.
 
   r+: Abertura do ficheiro para leitura e escrita. 

   b,t: Conforme se trate de um ficheiro do tipo bin�rio ou do tipo texto, adiciona-se 
        b ou t a qualquer uma das op��es anteriores (e.g.:wb). 

   A fun��o fopen() retorna NULL se ocorrer um erro na abertura. 

   Ap�s ser realizado o processo sobre um ficheiro aberto � que fech�-lo. 
   A opera��o de fecho de um ficheiro � feita pela fun��o : 

   fclose (FILE *fp); 

   Esta fun��o desaloca a estrutura FILE respectiva e fecha o ficheiro apontado por fp. 
   Em caso de erro (i.e. fechar um ficheiro que ainda n�o foi aberto) retorna EOF, caso 
   contr�rio retorna zero. 


   Fun��es orientadaa ao Caracter:
 
   As rotinas mais primitivas de input e output s�o fgetc e fputc.

   Estas rotinas l�m ou escrevem um caracter de cada vez, de e para um ficheiro que � 
   especificado pelo apontador FILE obtido da chamada de fopen(). 

   A chamada 

	ch = fgetc(fp); 

   Retorna o pr�ximo caracter de um ficheiro especificado por fp ou EOF se foi encontrado 
   o fim do ficheiro (ou, se ocorreu um erro). 
 
   A chamada 

	fputc(ch,fp); 

   escreve o caracter em ch no ficheiro especificado por fp. 
*/

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");

	FILE *fp;
	
	char texto[]="A cidade de Lisboa";

	int i;
	fp = fopen("dados.txt", "w");
	
	if (fp != NULL)
	{
		for (i=0; texto[i]; i++)
		{
			fputc(texto[i], fp);
		}
		printf("\n\nTexto escrito no fich dados.txt\n\n");
	
		fclose(fp);
	}
	else
	{
		printf("\n\nTexto NAO foi escrito no file\n\n");
	}
	
	return 0;
}

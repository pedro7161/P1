#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
// Programa Ref_067_copia_fich_1
/*
	Este programa faz uma c�pia de um ficheiro de texto,
	linha a linha, para um outro.
	
	O programa aplica as primitivas fgets, para a leitura de uma
	linha de texto a partir do ficheiro fonte, e fputs para a 
	escrita da mesma linha de texto num ficheiro destino que serve 
	assim de c�pia.

*/

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");

	FILE *fp1; // ponteiro para o fich de leitura
	
	FILE *fp2; // ponteiro para o fich de escrita
   	
	char str[80]; // para guardar uma string

   /* abertura do ficheiro para leitura */
   /* se a abertura n�o for bem sucedida ent�o o ptr fp1 recebe NULL */
   
   	fp1 = fopen("noticia.txt" , "r");
   	
    if(fp1 == NULL)
    {
      // no caso de erro de abertura enviar a mensagem para o
      // sistema de mensagens de erros.
      perror("Erro na abertura do ficheiro de leitura");
      return(-1);
    }
   
   	fp2 = fopen("copianoticia.txt" , "w");
   	   
    if(fp2 == NULL)
    {
      perror("Erro na abertura ou cria��o do fich de escrita");
      return(-1);
    }

    while( fgets (str, 80, fp1)  != NULL )
    {
    	
    // o comando fputs escreve no fich, apontado por fp2, 
	// a linha de texto armazenada na string str	
	
      fputs(str, fp2);  
    }
   	fclose(fp1); // fecho ptr leitura
	fclose(fp2); // fecho ptr escrita
	
	printf("\n\nCopia efetuada - ver na pasta o ficheiro copiado\n\n");
	system("PAUSE");
		
	return 0;
}

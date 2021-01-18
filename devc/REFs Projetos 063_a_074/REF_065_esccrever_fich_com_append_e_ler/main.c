#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
// Programa Ref_065_escrever_fich_com_append_e_ler
 
// Nesta vers�o o programa abre o ficheiro dados.txt para escrita,
// mas com anexa��o (append) n�o perdendo assim o texto anterior
// para al�m da profus�o de coment�rios.


// Correr este programa no Dev C++

// Este programa pede para digitar caracteres e escreve-os, um a um,  
// num ficheiro de texto.
// A digita��o dos carateres termina pressionando a tecla ENTER ('\n').

// seguidamente, o programa l�-os a partir do mesmo ficheiro

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	
	FILE *fp; // ptr para um ficheiro
	
	char ch; // var char para guardar cada carater lido

// seguidamente abre-se o ficheiro de texto dados.txt para escrita
// como � para excrita, se o fich n�o existir na pasta do projeto, 
// ent�o ser� criado automaticamente

	fp = fopen("dados.txt", "a"); // abertura do ficheiro para escrita ("a") com anexa��o
		
	if (fp != NULL) // se conseguiu abrir o ficheiro, ent�o fazer:
	{
		printf("\n\nDigite carateres para escrever no ficheiro aberto dados.txt\n\n");
		
// cada carater digitado, at� se clicar na tecla ENTER, � carregado
// na var ch e escrito no ficheiro dados.txt
// o ficheiro � referenciado pelo seu ptr fp
// o comando:
// fputc(ch, fp)
// significa:
// file put carater guardado em ch no fich representado pelo ptr fp
// ou seja:
// p�r o carater guardado em ch no fich apontado pelo ptr fp

		while( (ch = getchar()) != '\n' )
		{
			fputc(ch, fp);	
		}	
				printf("\n\nTexto escrito no fich dados.txt\n\n");
	
		fclose(fp);	// fechar o fich aberto para escrita
	}
	else
	{
		printf("\n\nTexto NAO foi escrito no file\n\n");
	}

	fp = fopen("dados.txt", "r"); // abir agora o fich para leitura


	if (fp != NULL) // se abriu bem o fich para leitura, ent�o:
	{		
		printf("\nEis o texto lido do ficheiro:\n\n");
		
// o seguinte ciclo l�, a partir do fich, um carater de cada vez, 
// guardando-o na var ch e enviando-o para o ecr�
// a leitura dos carateres termina logo que seja detetada a marca 
// EOF que significa End Of File

// o comando:

// fgetc(fp)
// significa:
// file get carater a partir do fich apontado pelo ptr fp
		
		while ((ch=fgetc(fp)) != EOF)
		{	
        	putchar(ch); // mesmo que printf("%c", ch)
    	}
    	
      fclose(fp);	// fecho do fich que foi aberto para leitura
    }
    else  
		printf("\n\nTexto Nao foi lido\n\n");
	
	printf("\n\nFim\n\n");
	system("PAUSE");
	return 0;
}


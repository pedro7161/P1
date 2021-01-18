#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
  
// Programa Ref_066_ler_fich_linha_a_linha

/* Este programa l� um ficheiro de texto, linha a linha, mostrando
   o seu conte�do no ecr�.

   Para tal, aplica a primitiva fgets
*/

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");
	
	FILE *fp1; // ponteiro para o fich de leitura
   	
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
   	
/*
	A primitiva fgets significa file get string, ou seja, l� 
	uma string do ficheiro referenciado atrav�s do ptr fp1, no 
	m�ximo 80 carateres, carregando na string chamada aqui de 
	str.
	
*/
	// ler enquanto houverem linhas de texto
    while( fgets (str, 80, fp1 ) != NULL )  
    {
      /* envia para o ecr� a string lida a partir do ficheiro*/
      	
     printf("\n%s", str);
      
    }
    fclose(fp1); // fechar o ficheiro

	printf("\n\n");
	system("PAUSE");
		
	return 0;
}


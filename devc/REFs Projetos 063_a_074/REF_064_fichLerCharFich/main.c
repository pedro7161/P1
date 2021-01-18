#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
// Programa Ref_064_fichLerCharFich

// ler caracteres de um ficheiro
// contar carateres de um ficheiro

int main(int argc, char *argv[]) 
{
    setlocale(LC_ALL, "Portuguese");

    FILE *fp;    /* apontador para o ficheiro */
    
    int k = 0;   /* para contar os caracteres */
    
    char ch;     /* inteiro para armazenar cada caracter lido */
 
    // Abrir o ficheiro

    fp = fopen("texto.txt", "r");
 
    // mostrar no ecr� e contar os caracteres do ficheiro

  if (fp != NULL)
  {
    while ((ch=fgetc(fp)) != EOF)  
    {
        putchar(ch); // mesmo que printf("%c", ch);
        
        k++;
    }

    printf("\nNumero total de caracteres = %d\n\n",k);
    
    fclose(fp); // Fechar o ficheiro
  }
  else
  {
 	printf("\n\nTexto NAO foi lido do file\n\n");
  }	
  
    system("PAUSE");
    return 0;
}



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
  
// Programa REF_068_fichs

/*
	Este programa usa os comandos fprintf e fscanf
	
	
	O comando fprintf escreve texto formatado num ficheiro.
	
	O comando fscanf permite a leitura a partir de um ficheiro 
	de texto formatado.	
	
	O comando fscanf � o oposto do fprintf j� que permite a leitura
	de texto formatado a partir de um ficheiro de texto.

*/
int main(int argc, char *argv[]) 
{	
	setlocale(LC_ALL, "Portuguese");

	FILE *fp1; 
	FILE *fp2;
 
 // declara��o de alguns dados de diferentes tipos
    int x=10;
    
    char str[30]="Rua do Lumiar";
    
    float y=3.5;
 
    fp1 = fopen("dados1.txt", "w");
    if (fp1 != NULL) 
    {
    
    // vamos escrever no fich um inteiro, uma string e um float
        fprintf(fp1, "%d %s %.1f", x, str, y);
        
        fclose(fp1);
    }
    else
        printf("Erro na abertura ou cria��o do fich de escrita.\n");
	
	
	// vamos agora ler a partir do ficheiro o texto formatado e 
	// envi�-lo para o ecr�
	
	// abertura do fich para leitura
	if((fp2 = fopen("dados1.txt", "r")) != NULL) 
	{
        
		// como se pode constatar o comando fcanf � semelhante
		// ao comando scanf s� que a leitura dos dados � a 
		// partir de um fich em vez de ser de um teclado
		
		fscanf(fp2, "%d %s %f", &x, str, &y);
        
        printf("\n\nEis os dados lidos a partir do ficheiro:\n\n");
        
        printf("x = %d\n", x);
        printf("str = %s\n", str);
        printf("y = %4.2f\n", y);
        
        fclose(fp2);
    }
    else
        printf("O ficheiro especificado n�o existe!\n");
        
	
	printf("\n\nConcluido!\n\n");
	system("PAUSE");
	
	return 0;
}


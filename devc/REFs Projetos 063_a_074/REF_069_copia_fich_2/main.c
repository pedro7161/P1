#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Programa Ref_069_copia_fich_2

/*
	Este programa faz uma c�pia de um ficheiro de texto, linha a linha, 
	para um outro, mas tamb�m escrevendo no ficheiro destino o n�mero da 
    linha atual, atrav�s da primitiva fprintf que permite a escrita de 
    texto formatado num ficheiro.
	
	O programa para al�m de aplicar as primitivas fgets e fputs aplica
	tamb�m assim fprintf 

	Al�m disto, aplica tamb�m outra t�cnica de impress�o das mensagens 
	de erro durante o processo de abertura de ficheiros.

*/

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "Portuguese");

	FILE *fp1; // ponteiro para o fich de leitura
	FILE *fp2; // ponteiro para o fich de escrita
   	
	char str[80]; // para guardar uma string

	int k; // contador de linhas de texto
	
   /* abertura dos ficheiros para leitura e escrita */
   
   	fp1 = fopen("noticia.txt", "r");	   
	if (fp1 == NULL)
	{
		printf("\n\nFicheiro noticias.txt nao abriu para leitura");
		
		exit(EXIT_FAILURE);	
	}
	
	fp2 = fopen("copianoticia.txt", "w");
	if (fp2 == NULL)
	{
		printf("\n\nFicheiro copianoticias.txt nao abriu ou n�o foi criado para escrita");
		
		exit(EXIT_FAILURE);	
	}
   
   
    k = 0;
   	while( fgets (str, 80, fp1)  != NULL )
    {
    	
    // o comando fprint escreve no fich, apontado por fp2, 
	// texto formatado, neste caso o n�mero corrente linhaa 	
	   
	  k++;
	  fprintf(fp2, "%d ", k); // escreve o numero da linha
      fputs(str, fp2);  
   	}
   	fclose(fp1); // fecho ptr leitura
	fclose(fp2); // fecho ptr escrita
	
	printf("\n\nCopia efetuada - ver na pasta o ficheiro copiado\n\n");
	system("PAUSE");
		
	return 0;
}


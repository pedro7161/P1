#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Programa  REF_054_primitivas_de_strings_1

// Introdu��o �s fun��es nativas de manipula��o de strings

int main(int argc, char *argv[])
{
	char fonte[30] = "lisboa e o Rio Tejo";
	
	char destino[30];

	char str1[30] = "O ISTEC no Lumiar";

	char str2[30] = " na cidade de Lisboa";

// strlen(str) - numero de carateres contidos numa string

	printf("\n\nA string - %s - tem %d carateres", fonte, strlen(fonte));

// strcpy(str_destino, str_fonte) - copia a string fonte para a str destino

	
	strcpy(destino, fonte);

	printf("\n\n strcpy: Copia de uma string:\n");
	printf("\n Fonte: %s", fonte);
	printf("\n\n Copia: %s", destino);

	
// strcat(str1, str2) - anexa a str2 a str1


	printf("\n\nA string str1: %s", str1);
	printf("\nA string str2: %s", str2);

	strcat(str1, str2);

	printf("\n\nA nova string str1 com anexamento de str2:\n\n %s", str1);


	printf("\n\n");
	system("pause");

	return 0;
}


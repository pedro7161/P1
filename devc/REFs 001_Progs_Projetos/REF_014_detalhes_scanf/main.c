#include <stdio.h>
#include <stdlib.h>

// Programa REF_014_detalhes_scanf


/*
	Particularidades da func scanf:

	1. Requer & antes de uma var tipo numerica ou char singular
	  (relembrar que o & significa o endereço da var na Memória)
	  Ex.:
			int val;
			char ch;
				
			scanf("%d", &val);

			scanf("%c", &ch);

	2. Todavia não requer o & no caso de uma string
	   (a string em si já apresenta um ponteiro para o seu endereço)
	  Ex.:
			char nome[20];

			scanf("%s", nome);

	3. O scanf lê uma string até encontrar o primeiro espaço

	   Desta forma, para ler uma string, em vez de scanf deve-se usar gets

	   Para a leitura de um carater singular, getchar é uma func específica
	   para leitura de carateres.
*/ 

/*
	Uma string é uma cadeia de carateres em forma de array
	Uma string é delineada por aspas e requer [] na declaração
	Ex: 
		char str1[] = "Cidade de Lisboa"

	Um carater individual é delineado por plicas
	Ex: 'a'

	No fim de uma string é inserido sempre automaticamente '\0'
*/

int main()
{
	char letra = 'g';

	char str1[] = "Ana Maria";

	char str2[30];

	short i;
	
	printf("\nInicialmente a var letra = %c", letra);
	printf("\nInicialmente a string str1 = %s", str1);

	printf("\n\nDigite uma letra: ");
	fflush(stdin);

	letra = getchar();
	printf("\nAgora a var letra contem a letra = %c", letra);

	printf("\n\nDigite uma string: ");
	fflush(stdin);
	scanf("%s", str1); // não requer & antes de str1
	printf("\nAgora a string str1 = %s", str1);

	// usando a func específica gets para ler toda a string

	printf("\n\nDigite novamente uma string: ");
	fflush(stdin);
	gets(str2);
	printf("\nEis a nova string digitada = %s", str2);

	// Dado que uma string é um array de carateres terminada 
	// pelo carater especial '\0' e que um array é um conjunto
	// de elementos, os quais podem ser acedidos individualmente
	// através do nome do array e de um índice de posição,
	// então vamos acedê-la (à string) desde o inicio ao fim,
	// carater a carater, mostrando-a na vertical (já que temos 
	// o controlo total sobre cada carater individualmente).
	
	printf("\n\nEis agora a string carater a carater, um em cada linha:\n\n");
	i=0;
	while(str2[i] != '\0')
	{
		printf("\n%c", str2[i]);
	
		i++;
	}

	printf("\n\n");
	system("PAUSE");
	
	return 0;
}



#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
 
// Programa REF_026_chars_4
 
/*
Fun��es de carateres (carateres individuais)
N�o confundir com fun��es de strings (cadeias de carateres)

Cada uma das seguintes fun��es recebe apenas um argumento e devolve 
verdadeiro ou falso.

Testa se carater �:
isalnum() - alphanum�rico - 'A'-'Z', 'a'-'z', '0'-'9'
isalpha() - alfab�tico - 'A'-'Z', 'a'-'z'
isascii() - ASCII - 0x00-0x7F
islower() - min�sculo - 'a'-'z'
isupper() - mai�sculo - 'A'-'Z'
isspace() - espa�o branco (blank, new line, tab, form feed)
ispunct() - de pontua��o
etc.
*/ 

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char ch;
	
	printf("\n\nTesta fun��es de carateres - isdigit, isalpha, etc. ");

	printf("\nDigite um carater: ");
	fflush(stdin);
	scanf("%c", &ch);

	// Como testar:
	// Testa se � d�gito
	if (isdigit(ch))
	{
		printf("\nO carater %c � um d�gito", ch);
	}
	else
	{
		printf("\nO carater %c n�o � um d�gito", ch);
	}
	
	// Testa se � alfab�tico
	if (isalpha(ch))
	{
		printf("\nO carater %c � alfab�tico", ch);
	}
	else
	{
		printf("\nO carater %c n�o � alfab�tico", ch);
	}

	printf("\n\n");
	system("PAUSE");
	return 0;
}


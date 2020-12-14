#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
 
// Programa REF_026_chars_4
 
/*
Funções de carateres (carateres individuais)
Não confundir com funções de strings (cadeias de carateres)

Cada uma das seguintes funções recebe apenas um argumento e devolve 
verdadeiro ou falso.

Testa se carater é:
isalnum() - alphanumérico - 'A'-'Z', 'a'-'z', '0'-'9'
isalpha() - alfabético - 'A'-'Z', 'a'-'z'
isascii() - ASCII - 0x00-0x7F
islower() - minúsculo - 'a'-'z'
isupper() - maiúsculo - 'A'-'Z'
isspace() - espaço branco (blank, new line, tab, form feed)
ispunct() - de pontuação
etc.
*/ 

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char ch;
	
	printf("\n\nTesta funções de carateres - isdigit, isalpha, etc. ");

	printf("\nDigite um carater: ");
	fflush(stdin);
	scanf("%c", &ch);

	// Como testar:
	// Testa se é dígito
	if (isdigit(ch))
	{
		printf("\nO carater %c é um dígito", ch);
	}
	else
	{
		printf("\nO carater %c não é um dígito", ch);
	}
	
	// Testa se é alfabético
	if (isalpha(ch))
	{
		printf("\nO carater %c é alfabético", ch);
	}
	else
	{
		printf("\nO carater %c não é alfabético", ch);
	}

	printf("\n\n");
	system("PAUSE");
	return 0;
}


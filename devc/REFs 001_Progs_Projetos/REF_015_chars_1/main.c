#include <stdio.h>
#include <stdlib.h>

// Programa REF_015_chars_1

// An�lise e tratamento de carateres individuais

// Este programa pede para o utilizador digitar um carater
// qualquer e a seguir indica o tipo de carater, ou seja,
// d�gito (ex.= 2, 6), carater normal (ex.= A, a, F) ou especial 
// (ex.:$,%,#,?)

// Relembrar que os carateres s�o armazenados na mem�ria atrav�s
// de c�digos padr�o.
// Por exemplo, em decimal, no C�digo ASCII: a letra A=65, 
// B=66, Z=90 e a=97.
// Por sua vez, o n�mero 0=48 e 1=49;
// O carater especial #=35, etc

int main()
{
	
	char ch;
	
	printf("\n\nDigite uma carater: ");
	fflush(stdin);
	scanf("%c", &ch);
	
	if ( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') )
	{
		printf("\n\nTrata-se de um carater alfanumerico");
	}
	else if ( ch >= '0' && ch <= '9')
	{
		printf("\n\nTrata-se de um digito");
	}
	else
	{
		printf("\n\nTrata-se de um carater especial");
	}

	printf("\n\n");
	system("PAUSE");
	
	return 0;
}



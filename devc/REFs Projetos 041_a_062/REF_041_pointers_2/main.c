#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Programa REF_041_pointers_2
//
// utilizacao de ptrs em strings
//
// Particularidades:
//
// ++ significa pr�ximo endere�o
//
   
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char m[30];// declara array de caracteres

	char *p; // declara ptr para carcteres;
	
	p = &m[0];	// inicializa ptr p com o endereco da 1� pos array

	printf("\n\nDigite o seu nome: ");
	fflush(stdin);
	gets(m);

	printf("\n\n\n");
	// ver a string na vertical usando pointers

	while (*p)	// enquanto houverem caracteres normais
	{
		printf("%c", *p++); // mostra conteudo e actualiza endereco
	}

	// repete o c�digo, mas mostrando os enderecos

	p = &m[0]; // reset o conteudo de p = endereco 1� posicao de m
	
	printf("\n\nEnd. primeira posicao array: %ld", &m[0]);

	printf("\nEnd. do proprio ptr p: %ld",  &p);
	printf("\n\n");

	printf("\n\n Info sobre ptr p");
	printf("\n\n Endereco    Valor	  Acesso indireto\n");

	while ( *p )
	{
		printf("\n %ld", &p);

		printf("    %ld", p);

		printf("             %c",  *p);

		p++;
	}

	printf("\n\n");
	system("pause");

	return 0;
}


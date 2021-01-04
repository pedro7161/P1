﻿#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
// Programa REF_050_ptr_to_ptr_strings
//
// utilizacao de ptrs em strings
//
// Particularidades:
//
// ++ significa próximo endereço
//

int main()
{
	setlocale(LC_ALL, "Portuguese");

	char m[30];// declara array de caracteres

	char *p1; // declara ptr para carcteres;
	
	char **p2;
	
	p1 = &m[0];	// inicializa ptr p com o endereco da 1ª pos array
	
    	p2 = &p1;
	
    	printf("\n\nDigite o seu nome: ");
	fflush(stdin);
	gets(m);

	printf("\n\n\n");
	// ver a string na vertical usando pointers

	while (*p1)	// enquanto houverem caracteres normais
	{
		printf("%c", **p2); // mostra conteudo e actualiza endereco
	    p1++;
    }

	// repete o código, mas mostrando os enderecos

	p1 = &m[0]; // reset o conteudo de p = endereco 1ª posicao de m
	
	printf("\n\nEnd. do pointer to pointer p2: %ld", &p2);
	printf("\n\nEnd. do proprio ptr p: %ld", &p1);
	printf("\n\nEnd. primeira posicao array: %ld", &m[0]);

	
	printf("\n\n");

	printf("\n\n Info sobre ptr p");
	printf("\n\n Endereco    Valor	  Acesso indireto\n");

	while ( *p1 )
	{
		printf("\n %ld", &p2);

		printf("    %ld", p1);

		printf("             %c",  **p2);

		p1++;
	}

	printf("\n\n");
	system("pause");

	return 0;
}


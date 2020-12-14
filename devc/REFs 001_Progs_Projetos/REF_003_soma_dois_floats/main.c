#include <stdio.h>
#include <stdlib.h>

// Programa REF_003_soma_dois_floats

// Este programa realiza a soma de dois floats

/*
Dado que se trata de um programa que vai manipular dados, precisamos 
de:

	1. Declarar as variáveis (neste caso, do tipo do tipo float)
	2. Ler os dados digitados
	3. Calcular a soma dos dados digitados
	4. Mostrar no ecrã o resultado
*/

int main()
{
	float x, y, soma;
	
	printf("\nDigite Valor 1: ");
	fflush(stdin);
	scanf("%f", &x);
	
	printf("\nDigite Valor 2: ");
	fflush(stdin);
	scanf("%f", &y);
	
	soma = x + y;
	
	printf("\n\nA Soma de %4.2f com %4.2f = %4.2f", x, y, soma);
	
	printf("\n\n\n");
	system("pause");
	return 0;
}





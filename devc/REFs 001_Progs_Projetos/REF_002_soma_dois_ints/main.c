#include <stdio.h>
#include <stdlib.h>

// Programa REF_002_soma_dois_ints

// Este programa realiza a soma de dois inteiros

/*
Dado que se trata de um programa que vai manipular dados 
inteiros, precisamos de:

	1. Declarar as vari�veis - do tipo inteiro (para reserva de mem�ria)
	2. Ler os dados digitados (que ser�o carregados autom�ticamente na mem�ria)
	3. Calcular a soma dos dados digitados
	4. Mostrar o resultado no ecr�
*/

int main()
{
	int x, y, soma;
	
	printf("\nDigite Valor 1: ");
	fflush(stdin);
	scanf("%d", &x); // l� e carrega na Mem�ria na localiza��o da vari�vel x
	
	printf("\nDigite Valor 2: ");
	fflush(stdin);
	scanf("%d", &y); // l� e carrega na Mem�ria na localiza��o da vari�vel y
	
	soma = x + y;
	
	printf("\n\nA Soma de %d com %d = %d", x, y, soma);
	
	printf("\n\n\n");
	system("pause");
	return 0;
}





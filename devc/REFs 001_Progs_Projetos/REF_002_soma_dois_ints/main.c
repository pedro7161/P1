#include <stdio.h>
#include <stdlib.h>

// Programa REF_002_soma_dois_ints

// Este programa realiza a soma de dois inteiros

/*
Dado que se trata de um programa que vai manipular dados 
inteiros, precisamos de:

	1. Declarar as variáveis - do tipo inteiro (para reserva de memória)
	2. Ler os dados digitados (que serão carregados automáticamente na memória)
	3. Calcular a soma dos dados digitados
	4. Mostrar o resultado no ecrã
*/

int main()
{
	int x, y, soma;
	
	printf("\nDigite Valor 1: ");
	fflush(stdin);
	scanf("%d", &x); // lê e carrega na Memória na localização da variável x
	
	printf("\nDigite Valor 2: ");
	fflush(stdin);
	scanf("%d", &y); // lê e carrega na Memória na localização da variável y
	
	soma = x + y;
	
	printf("\n\nA Soma de %d com %d = %d", x, y, soma);
	
	printf("\n\n\n");
	system("pause");
	return 0;
}





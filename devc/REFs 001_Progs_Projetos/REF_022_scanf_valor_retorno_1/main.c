#include <stdio.h>
#include <stdlib.h>

// Programa REF_022_scanf_valor_retorno_1

// An�lise do valor de retorno da fun��o scanf

// Este programa explica como pode ser lido o valor 
// de retorno da fun��o scanf para posteriormente ser 
// usado na valida��o de dados de entrada.

int main()
{
	int n1, n2, resultado_scanf;
		
	printf("\n\nDigite dois inteiros: ");

	resultado_scanf = scanf("%d%d", &n1, &n2);
	
	printf("\n\n O resultado da func scanf = %d", resultado_scanf);

	printf("\n\n");
	system("PAUSE");
    		
	return 0;
}


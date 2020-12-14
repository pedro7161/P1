#include <stdio.h>
#include <stdlib.h>

// Programa REF_023_scanf_valor_retorno_2

/* Valida��o de dados - scanf

   Este programa continua a ler um dado de entrada enquanto
   o valor digitado n�o for do tipo de dados expect�vel.

*/

int main()
{
	int num, valor_retorno;
	
	do
	{
		printf("\nDigite um valor inteiro: ");

	    	fflush(stdin);
		valor_retorno = scanf("%d", &num);

		if (valor_retorno != 1)
		{
			printf("\n\n\nValor digitado incorrecto\n\n");
		}
	
	} while (valor_retorno != 1);
	
	printf("\n\n");
	system("PAUSE");
	
	return 0;
}


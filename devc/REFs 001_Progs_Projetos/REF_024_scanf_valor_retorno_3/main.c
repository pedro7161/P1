#include <stdio.h>
#include <stdlib.h>

// Programa REF_024_scanf_valor_retorno_3

// valida��o de entrada de dados num ciclo

// Este programa aplica a t�cnica de valida��o de dados para ler
// v�rios valores inteiros digitados somente terminando o input
// assim que seja digitado um tipo de dados diferente de num�rico,
// como, por exemplo, um carater.

// O programa calcula tamb�m a soma dos dados inteiros digitados


int main()
{
	int num, i, els, soma, valor_retorno;
	
	els = 0;
	soma = 0;
	printf("\nDigite varios valores inteiros e para terminar digite uma letra: \n\n");
	
	while(scanf("%d", &num) == 1)
	{
		soma += num;

		els++;
	}

	printf("\n\nDigitou %d valores", els);
	printf("\n\nA sua soma = %d", soma);
	
	printf("\n\n");

    	system("PAUSE");	
	
	return 0;
}



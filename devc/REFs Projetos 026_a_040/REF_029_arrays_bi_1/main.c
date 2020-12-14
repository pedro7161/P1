#include <stdio.h>
#include <stdlib.h>

// Programa REF_029_arrays_bi_1

/*	Matrizes
	
	Uma matriz � um array (ou vetor) bidimensinal (em forma de tabela 
	ou grelha) no qual cada elemento � acedido atrav�s da refer�ncia 
	a uma intersec��o de uma linha com uma coluna.

	Declara��o tipo:

		float tabela1 [2][3];

	declara um array bi chamado de tabela1, organizado 
	em duas linhas (as linhas 0 e 1) e por tr�s colunas
	(as colunas 0, 1 e 2).

	Por exemplo, 
		
		tabela1[1][2] = 20;

	guarda o valor 20 no array tabela1 na linha 1 
	(a 2� linha) e coluna 2 (a 3� coluna).

	
	Como declarar e inicializar uma matriz:

	Exemplo 1:

	float nums[2][3];

	nums[0][0] = 10;
	nums[0][1] = 15;
	nums[0][2] = 13;
	nums[1][0] = 12;
	nums[1][1] = 16;
	nums[1][2] = 14;

	Exemplo 2:

	float nums[2][3] = 
		
	{
		{10, 15, 13},
		
		{12, 16, 14}
	};
*/

// Este programa cria e soma os valores dos elementos 
// de um array bidimensional de floats.

// Vamos precisar de dois ciclos para aceder aos els do
// array bi.

// O ciclo externo controla as linhas e o ciclo interno
// controla as colunas

int main()
{
// declarar as vars
	float vals[2][3];
	int lin, col;
	float soma;

// carregar o array bi
	for(lin = 0; lin < 2; lin++)
	{
		for (col = 0; col < 3; col++)
		{
			printf("\nDigite o valor da (linha, coluna) %d,%d: ", lin, col);
			fflush(stdin);
			scanf("%f",&vals[lin][col]);
		}
	}
  
// Mostrar o array
	printf("\n\nEis o array digitado: \n\n");
	for(lin = 0; lin < 2; lin++)
	{
		for (col = 0; col < 3; col++)
		{
			printf("%4.2f  ", vals[lin][col]);	
		}
		printf("\n\n");
	}

// somar o array bi
	for(lin = 0, soma = 0; lin < 2; lin++)
	{
		for (col = 0; col < 3; col++)
		{
				soma = soma + vals[lin][col];
		}
	}

	printf("\n\nA soma = %4.2f", soma);

	printf("\n\n");
	system("pause");
	
	return 0;
}


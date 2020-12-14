#include <stdio.h>
#include <stdlib.h>

/*	Programa REF_036_arrays_bi_funcs_2
	
	Usa uma fun��o para calcular e devolver a soma dos 
    elementos de um array bi passado como argumento. 

	Nota: 
	Quando o par�metro � um array bi ent�o a declara��o formal deve 
	declarar o n�mero de linhas (opcional) e colunas (obrigat�rio).
*/

float calc_soma(float nums[2][3])
{
	int i, j;
	float total;

	for(i = 0, total = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			total = total + nums[i][j];
		}
	}	
	return total;
}

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
	
	for (lin = 0; lin < 2; lin++)
	{
		for (col = 0; col < 3; col++)
		{
			printf("%4.2f  ", vals[lin][col]);	
		}
		printf("\n\n");
	}

// chama uma fun��o para somar os valores do array

	soma = calc_soma(vals);
	printf("\n\nA soma do array bi = %4.2f", soma);

	printf("\n\n");
	system("pause");

	return 0;
}


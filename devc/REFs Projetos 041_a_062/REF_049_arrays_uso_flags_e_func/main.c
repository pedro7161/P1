#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define NUM_ELS 7
 
/* Programa REF_049_arrays_uso_flags_e_func

	Este programa � o mesmo que o programa anterior com
	a diferen�a que aplica uma fun��o para detectar se o 
	array passado como argumento cont�m algum valor 
	negativo.
*/

// Fun��o que devolve 1 se o array contiver algum valor
// negativo ou 0, em caso contr�rio.
// Neste caso, n�o vamos precisar da flag j� que podemos
// retornar o valor 1 ou 0.

int deteta_se_ha_negs(float nums[])
{
	int k;

	for(k = 0; k < NUM_ELS; k++)
	{
		if (nums[k] < 0) return 1;
	}

	return 0;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

// declara��o das vars

	float vals[NUM_ELS];
	int i;
	int ha_negs;

// carregar o array
	for(i = 0; i < NUM_ELS; i++)
	{
		printf("\n\nDigite o Valor %d: ", i);
		fflush(stdin);
		scanf("%f", &vals[i]);
	}

// mostrar o array
	printf("\n\nEis o array digitado: \n\n");
	for (i = 0; i < NUM_ELS; i++)
	{
		printf("\n %4.2f", vals[i]);
	}

	ha_negs = deteta_se_ha_negs(vals);

// ap�s os ciclos verificar se h� negs

	if (ha_negs == 1)
	{
		printf("\n\nSim, ha valores negativos");
	}
	else
	{
		printf("\n\nNao ha valores negativos");
	}

	printf("\n\n\n");
	system("pause");

	return 0;

} // fecha o main

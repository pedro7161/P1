#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define NUM_ELS 7
   
/* Programa REF_048_arrays_uso_flags

	Este programa continua a manipular os arrays
	unidimensionais.

	Desta vez, vamos introduzir o conceito da var 
	do tipo flag (bandeirinha).

	Vamos fazer assim v�rios experimentos com um 
	array.
	
	Vamos come�ar por carregar um array de sete 
	floats e depois analis�-lo para determinar
	se cont�m algum valor negativo (note-se que
	n�o pretendemos saber quantos negativos 
	existem, mas simplesmente se h� algum valor 
	negativo no array).
*/

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

// verificar se h� algum valor negativo.
// vamos percorrer o array, usando ciclos, 
// e logo que seja detectado um valor
// negativo devemos sair dos ciclos.

// vamos dizer que n�o ha negs
// inicializando a flag a 0

	

	for (i = 0; i < NUM_ELS; i++)
	{
        ha_negs = 0;
        
		if(vals[i] < 0)
		{
			ha_negs = 1;
		}
		
		if (ha_negs == 1) break; // quebra o for se ha_negs for igual a 1
	}

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


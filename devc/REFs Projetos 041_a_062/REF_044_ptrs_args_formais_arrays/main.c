#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Programa REF_044_ptrs_args_formais_arrays
 
#define N 5

// Pointers como args formais de arrays

// A declara��o formal abaixo - int *p - significa o seguinte 
// 
// 1� declara um pointer para inteiros

// 2� dado que o arg actual � um array de inteiros, ent�o
//    realiza automaticamente o seguinte:
//
//	  p = &nums[0];
//
// Ou seja, a declara��o formal declarou um ptr para inteiros e
// automaticamente carregou o endere�o da primeira posi��o do 
// array passado como argumemento no pointer (o que dispensou 
// termos que fazer isso).
//

void mostra_array(int *p)
{
	int i = 0;

	printf("\n\n Os valores do array na funcao: \n\n");

	while (i < N)
	{
		printf("\n %d",  *p++);
		i++;
	}
}


int main()
{
	setlocale(LC_ALL, "Portuguese");

	int nums[N] = {10, 20, 30, 40, 50};

	mostra_array(nums); // chama func

	printf("\n\n\n");
	system("pause");

	return 0;

}


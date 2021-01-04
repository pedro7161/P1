#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define N 5
 
// Programa REF_045_ptrs_para_arrays
//
// Aplica��o de pointers para arrays

// Aten��o:

// neste caso, temos que saber o num de els no array j� que nos
// arrays num�ricos n�o existe o caracter especial '\0' para
// indicar o fim do array.


int main()
{
	setlocale(LC_ALL, "Portuguese");

	int nums[N] = {10, 20, 30, 40, 50};

	int i;
	
	int *p; // declara ptr para ints
	
	p = &nums[0]; // ptr p recebe o endereco da 1� posicao do array

	
	printf("\n\nO array ocupa %d bytes\n", sizeof(nums));


	printf("\n\nEndereco de p: %ld", &p);

	printf("\n\nEndereco da primeira posicao do array nums: %ld", &nums[0]);

	i = 0;
	printf("\n\nOs valores do array usando pointers sao:\n");

	while (i < N)
	{

// mostra o conteudo de p que � o endere�o de uma posi��o no array.

		printf("\n\nConteudo de p: %ld", p);

// mostra o valor e depois actualiza-se com novo endereco 

		printf("  Valor acedido por p: %d", *p++);

		i++;
	}

	printf("\n\n\n");

	system("pause");

	return 0;
}

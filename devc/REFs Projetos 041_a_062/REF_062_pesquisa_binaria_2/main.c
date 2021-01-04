#include <stdio.h>
#include <stdlib.h>


// Programa REF_062_pesquisa_binaria_2

// Este programa aplica o m�todo de pesquisa bin�ria
// para determinar se um determinado elemento contido
// num array, aqui chamado de chaves (array com os 
// valores a testar) se encontra num outro array, aqui
// chamado de base, que serve assim de refer�ncia.

// A pesquisa bin�ria requer o array-base ordenado por
// ordem crescente, caso contr�rio este m�todo simplesmente
// n�o funciona.

// macro que calcula o n�mero de elementos num array.
// Determina dividindo o num de bytes no array pelo num
// de bytes ocupado por cada elmento.

#define n_els(x) (sizeof(x) / sizeof(x[0]))

// a fun��o recebe args do tipo ptr e devolve 
// um ptr para um inteiro

int *pesquisa_binaria(int *key, int *array_base, int num_els)
{
	int low, high, mid;
	low = 0;
	high = num_els - 1;

	while (low <= high)
	{
		mid = (low + high ) / 2;

		if ( *key < *(array_base + mid))
		{
			high = mid - 1;
		}
		else if (*key > *(array_base + mid))
		{
			low = mid + 1;
		}
		else
		{
			return (array_base + mid);
		}
	}//fecha while

// se nao tiver sucesso com a chave corrente,
// se a chave nao se encontra no array base
// entao devolver um valor falso, o zero, mas
// atencao que a func devolve um ptr para um
// inteiro.
// Entao fazer um ptr para o zero inteiro.

	return ((int *) 0);
}// fecha a func


int main(int argc, char *argv[])
{
// array-base a ser pesquisado
	int base[]={2,4,6,8,10,12,14,16,18,20,22};

// array-chaves com os valores a testar.
// n�o requer ordena��o
	int chaves[]= {2, 20, 11, 12, 0};

// vars auxiliares para guardar o tam ou num els do
// array-base e do array-chaves

	int tam_base;
	int tam_chaves;

	int i; // contador

// ptr para um inteiro para guardar o 
// ptr devolvido pela func
	int *res;

// recebe o endere�o do elm do array chaves
// a pesquisar no array base

	int *target;

// calcula aqui os tamnhos atrv�s das macros

	tam_base = n_els(base);
	tam_chaves = n_els(chaves);

// ciclo para testar as cinco chaves, uma de cada vez

	for(i=0; i < tam_chaves; i++)
	{
// na primeira volta do ciclo, target guarda o
// endere�o da primeira chave, onde est� o valor 2
		target = chaves + i;

		printf("\n\n\n\nEndereco do Valor %d a ser testado = %ld\n", *target, target);
			 
// chamada da fun��o
// lembrar que este m�todo devolve um ptr para
// um intero.

// Os args s�o:
// target - para guardar o endereco da chave
// base - o enereco da primeira posicao da base
// tamanho da base

// se o valor for encontrado, o seu endereco � 
// devolvido pela func e armazenado em res
// caso contr�rio res recebe um valor false (0),
// mas tem que ser do tipo ptr

		res = pesquisa_binaria(target, base, tam_base);
		
		if (res) // se ptr n�o for null
		{			
                printf("\nO valor %d encontra-se na tabela-base \n", *res);              	
		}
		else
		{				
            printf("\nO valor %d nao se encontra na tabela-base \n", chaves[i]);              				
		}
	}// fecha for

	printf("\n\n\n\n");
	system("pause");

	return 0;
}


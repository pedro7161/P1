#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5 // quantidade de n�meros a sortear

// Programa REF_059_loto3

// Mesmo que o programa loto1 com a diferen�a que
// usa as vars principais como globais e diversas 
// fun��es para as diferentes tarefas.

// Relembrar que as vars globais s�o partilhadas por
// todas as fun��es (isto significa que qualquer
// fun��o pode alterar o valor de qualquer uma destas
// vars em todo o programa).

// declara��o das vars globais

int loto[N]; // para guardar os cinco nums �nicos

int i; // ctdr de nums �nicos
	
int num; // var auxilair para guardar o novo num gerado


void inicializar_array()
{
	int k;
	for (k = 0; k < N; k++)
	{
		loto[k] = 0;
	}

} // fecha func


void gera_num_aleatorio()
{
	srand((unsigned)time(NULL)); 
	num = 1 + ( rand() % 50 ); 

} // fecha func


int verifica_se_num_repetido()
{
	int k;
	for (k = 0; k < N; k++)
	{
		if(num == loto[k])
		{
			return 1; // encontrou num repetido
		}
	} // fecha for

	return 0; // se chegou aqui � que num � �nico

} // fecha func


void mostra_nums()
{
	printf("\n\n\n Eis os numeros sorteados: \n\n");	
	for(i = 0; i < N; i++)
	{
		printf("\n %d", loto[i]);
	}
}



int main()
{	
	inicializar_array();

	i = 0;
	while ( i < N)
	{
		gera_num_aleatorio();
		
		if (verifica_se_num_repetido() == 0)
		{
			loto[i] = num;
			i++;
		}
	} // fecha while

	mostra_nums();

	printf("\n\n\n");
	system("pause");
	
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5 // quantidade de n�meros a sortear

// Programa REF_058_loto2
//
// Este programa � o mesmo que o anterior (loto1)
// com a diferen�a que cria uma fun��o para 
// verificar se o novo n�mero gerado j� saiu.


// Fun��o que recebe como argumentos um valor inteiro, val,
// e um array, sorte,a fim de verificar se o valor val se 
// encontra no array sorte.

// Devolve 0, se val n�o se encontra no array

// Devolve 1, se val se encontra, retornando
// imediatamente da fun��o logo que este caso
// seja verdaeiro.

int verifica_se_num_repetido(int val, int vals[])
{
// Os params formais s�o:
// 
// val � o novo n�mero gerado
// vals � o array com n�meros n�o repetidos//

	int k;

	for (k = 0; k < N; k++)
	{
		if(val == vals[k])
		{
			return 1; // encontrou num repetido
		}
	} // fecha for

	return 0; // se chegou aqui � que num � �nico

} // fecha func


void main()
{
// declara��o das vars

	int loto[N]; // para guardar os cinco nums �nicos

	int i; // ctdr de nums �nicos
	
	int num; // var auxilair para guardar o novo num gerado

	int ja_saiu; // flag, para assinalar se num � repetido
 

// inicializar os els do array a 0

	for (i = 0; i < N; i++)
	{
		loto[i] = 0;
	}
	
// Num conjunto de ciclos gerar os nums aleat�rios
// e guard�-los num array os que n�o s�o repetidos

// Reset i para servir de contador de nums �nicos
// isto significa que i s� vai ser actualizado no
// caso da ocorr�ncia de um valor gerado ser �nico

	i = 0;
	while ( i < N)
	{
// gerar num aleat�rio	

		srand((unsigned)time(NULL)); // a semente para realimentar rand	
		num = 1 + ( rand() % 50 ); // gera num aleat�rio
	
// chama fun��o para verificar se num ja saiu
// se num ja saiu, a func devolve 1
// se num ainda n�o saiu ent�o func devolve 0

		ja_saiu = verifica_se_num_repetido(num, loto);

		if (ja_saiu == 0)
		{
			loto[i] = num;
			i++;
		}

	} // fecha while

// ver os n�meros gerados
	printf("\n\n\n Eis os numeros sorteados: \n\n");	
	for(i = 0; i < N; i++)
	{
		printf("\n %d", loto[i]);
	}

	printf("\n\n\n");
	system("pause");
}





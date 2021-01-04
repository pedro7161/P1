#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5 // quantidade de n�meros a sortear

//
// Programa REF_057_loto1

// Este programa cria cinco nums �nicos a partir de n n�meros 
// gerados aleat�riamente de totoloto

// Relembrar:

// 1. Que os nums n�o podem ser repetidos
// 2. O que implica termos que guardar os nums �nicos num array
// 3. Os nums t�m que estar no intervalo de valores entre 1 e 50

int main()
{
	int loto[N];

	int i; // contador de nums �nicos

	int k; // var auxiliar na busca de nums repetidos

	int num;

// flag, reset pk ainda n�o saiu valor repetido

	int ja_saiu = 0; 

// inicializar os els do array a 0

	for (i = 0; i < N; i++)
	{
		loto[i] = 0;
	}

// gerar os nums aleat�rios e guardar num array 
// os que n�o s�o repetidos

// reset i para servir de contador de nums �nicos
// isto significa que i s� vai ser actualizado no
// caso da ocorr�ncia de um valor gerado ser �nico

	i = 0; 
	while (i < N)
	{
// gerar num aleat�rio

		srand((unsigned)time(NULL)); // a semente para realimentar rand
		num = 1 + ( rand() % 50 ); // gera num aleat�rio
		 	
		ja_saiu = 0; // reset flag  para assinalar que 
			
// mas temos que verificar se realmente o novo num ainda nao saiu
// percorremos o array at� ao �ltimo elemento inserido num ainda n�o saiu
				
		for (k = 0; k < i; k++)
		{
			if(num == loto[k]) 
			{
				ja_saiu = 1; // num gerado j� existe no array
			}

		} // fecha for


		if (ja_saiu == 0)
		{

// ent�o temos um num gerado n�o repetido

			loto[i] = num; // insere novo num �nico

			i++;  // actualiza ctdr nums �nicos
		}

	} // fecha while

// Ver os nums da sorte

	printf("\n\n\n Eis os numeros sorteados: \n\n");
	for (i = 0; i < N; i++)
	{
		printf("\n%d", loto[i]);
	}

	printf("\n\n");
	system("pause");

	return 0;
}


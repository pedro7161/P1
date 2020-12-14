#include <stdio.h>
#include <stdlib.h>

#define NUM_ELS 5

// Programa REF_027_arrays_1
 
// Introdu��o aos arrays 
// Um array � conjunto de els do mesmo tipo de dados
// Tal como as strings cada elemento � acedido atrav�s 
// do nome do array e de um �ndice de posi��o, a partir
// da posicao 0

// Todavia, ao contr�rio das strings os arrays n�o t�m
// um indicador do seu fim

// Este programa calcula a m�dia de cinco temperaturas
// digitadas para um array

int main()
{
	float temps[NUM_ELS]; // declara um array	
	float soma, media;
	int i;

// Carregar na M as temps
	i = 0;
	while(i < NUM_ELS)
	{
		printf("\nDigite a temperatura %d: ", i);
		fflush(stdin);	
		scanf("%f", &temps[i]);

		i++;
	}
 
// Ver os valores da M
	printf("\n\nEis os valores digitados: \n\n");
	i = 0;
	while(i < NUM_ELS)
	{	
		printf("\n%4.2f", temps[i]);

		i++;
	}

// Somar as temps
	soma = 0;
	i = 0;
	while(i < NUM_ELS)
	{	
		soma = soma +  temps[i];
		i++;
	}

// Media

	media = soma / NUM_ELS;
	printf("\n\nA Media = %4.2f", media);
	
	printf("\n\nDigite um carater para continuar");
	fflush(stdin);	
	getchar();

	return 0;
} // fecha o main


#include <stdio.h>
#include <stdlib.h>

#define NUM_ELS 5

// Programa REF_033_funcs_4

// Arrays Unidimensionais e fun��es

/*
  Este programa cria fun��es para calcular a m�dia,
  o m�ximo e o m�nimo do array.

  Como sabemos, as funcs s�o espec�ficas no sentido
  que somente podem devolver ao programa chamante
  um valor.
  
  Desta forma, vamos precisar de tr�s fun��es (uma
  para calcular a m�dia, outra para o m�ximo e
  outra para o m�nimo).
*/

// Resumindo, o programa calcula e retorna:

// a m�dia do array (passado como argumento)
// O valor m�ximo
// O valor m�nimo


// Func para calcular e devolver a m�dia do array
float calc_media(float nums[])
{
	int i;
	float soma;

// somar os valores para calcular a m�dia
	for (i = 0, soma = 0; i < NUM_ELS; i++)
	{
		soma = soma + nums[i];
	}

// calcular a m�dia
	return (soma / NUM_ELS);

} // fecha calc_media


float calc_maximo(float vals[])
{
	float max;
	int i;

// vamos dizer que o valor maximo � o 1� elemento
	max = vals[0]; 

// temos que provar comparando cada el do array e
// actualizando a var maximo

	for (i = 1; i < NUM_ELS; i++)
	{
		if (vals[i] > max)

			max = vals[i];
	}

	return max;
} // fecha calc_maximo

// Func para calcular e devolver o valor minimo
float calc_minimo(float valores[])
{
	float min;
	int i;

// vamos dizer que o valor minimo � o 1� elemento
	min = valores[0]; 

// temos que provar comparando cada el do array e
// actualizando a var maximo

	for (i = 1; i < NUM_ELS; i++)
	{
		if (valores[i] < min)

			min = valores[i];
	}

	return min;

}  // fecha calc_minimo


int main()
{
	float temps[NUM_ELS];
	float soma, media, maximo, minimo;

	int i; // �ndice de posi��o

// carregar o array
	for (i = 0; i < NUM_ELS; i++)
	{
		printf("\nDigite a temperatura %d: ", i);
		fflush(stdin);
		scanf("%f", &temps[i]);
	}

// visualizar array
	printf("\n\n Eis o array digitado: \n\n");

	for (i = 0; i < NUM_ELS; i++)
	{
		printf("\n %4.2f", temps[i]);
	}
	
// chama func para calcular a m�dia do array
	media = calc_media(temps);
	printf("\n\n A Media do array = %4.2f", media);
 
// calcular valor m�ximo
// chama func para calcular o valor maximo
	maximo = calc_maximo(temps);
	printf("\n\n O valor maximo = %4.2f", maximo);

// calcular valor minimo
// chama uma func para calcular o valor minimo
	minimo = calc_minimo(temps);
	printf("\n\n O valor minimo = %4.2f", minimo);
	
	printf("\n\nDigite um carater para continuar\n\n");
	fflush(stdin);	
	getchar();

	return 0;
} // fecha o main


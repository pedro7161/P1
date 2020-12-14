#include <stdio.h>
#include <stdlib.h>

// Programa REF_013_ciclos_2


// Introdu��o pr�tica aos ciclos

// O objetivo deste programa � simplesmente conhecer 
// a utilidade dos ciclos.

// Brevemente os ciclos ser�o analisados em detalhe

// Este Programa calcula a m�dia de 5 temperaturas 
// digitadas

/*
	Dado que se trata de um programa que vai ler e manipular 

	n valores, precisamos de um ciclo.

	Precisamos tamb�m de:

	1. Declarar as vari�veis

		Uma vari�vel tipo float para ler a temperatura - temp

		Uma var tipo float para acumular o valor de cada temperatura - soma

		Uma var tipo float para guardar a media - media

		uma var tipo int para o contador do ciclo - k

	2. Inicializar a zero o contador e o acumulador

	3. Dentro de cada ciclo, precisamos de:

		Ler a temperatura seguinte

		Acumul�-la com a temp anterior

		Atualizar o contador

	4. Ap�s a conclus�o dos ciclos:

		calcular e mostar o valor da media
*/


int main()
{
	short k;
	float temp, soma, media;

	soma = 0;
	k = 0;
	while (k < 5)
	{
		printf("\n\nDigite o Valor seguinte: ");
		fflush(stdin);
		scanf("%f", &temp);
		
		soma = soma + temp;
		
	       	printf("\n\nCiclo = %hd soma = %4.2f", k, soma);

		k++;
        
	} // fecha while
	
	media = soma / 5;

	printf("\n\nA Media das temperaturas = %4.2f", media);
	
	printf("\n\n");
	system("PAUSE");
	
	return 0;

} // fecha main



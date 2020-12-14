#include <stdio.h>
#include <stdlib.h>

// Programa REF_028_arrays_2
//
// Arrays Unidimensionais - continua��o
//

/*
Revendo os arrays:

Um array � uma vari�vel indexada que normalmente apresenta-se
sob as formas uni-dimensionais e bi-dimensionais.

Um array uni-dimensional � tamb�m conhecido como vetor.

Por sua vez, um array ou vetor bi-dimensional � tamb�m conhecido por 
matriz.

Os arrays s�o considerados como as estruturas de dados mais simples.

Essencialmente, destinam-se a manter uma s�rie de elementos de dados,
os quais devem ser do mesmo tamanho e tipo de dados. 

Os seus elementos individuais s�o acedidos atrav�s do nome do vetor 
a que pertencem e por um �ndice de posi��o,tamb�m chamado de subscri��o,
dentro de par�nteses rectos.

Por exemplo, no caso dos arrays unidimensionais, nums[0] refere-se ao 
elemento 0 do array chamado nums.

Por exemplo, no caso dos arrays bi-dimensionais, tabela[2][1] refere-se
ao elemento 2,1 (a interse��o da linha 2, que � a terceira linha, j� que 
a primeira linha � a linha 0, com a coluna 1, que � a segunda coluna, j� 
que a primeira coluna � a coluna 0) do array bidimensional chamado tabela.
 
O �ndice geralmente utiliza uma sequ�ncia de n�meros inteiros,(ao contr�rio 
de um array associativo) mas o �ndice pode ter qualquer valor ordinal.
 
Os arrays t�m a vantagem de que os seus elementos s�o acess�veis de forma 
r�pida mas t�m a limita��o dos seus dados terem que ser de tamanho fixo e 
do mesmo tipo de dados.

A forma de aceder aos elementos de um array � assim directa, ao contr�rio 
das listas, conforme constataremos brevemente.

Isto quer dizer que o elemento desejado obtem-se a partir do seu �ndice e 
n�o � preciso procur�-lo elemento por elemento. 

No caso das listas, por exemplo, para alcan�ar o quarto elemento ter-se-� 
de aceder primeiro aos tr�s anteriores, a n�o ser que se guarde um ponteiro 
que permita aceder de maneira r�pida a esse elemento em particular, tamb�m 
conforme constataremos brevemente.

Arrays unidimensionais:

Exemplos:

 
Declara��o:

double temperaturas[5];
	
Declara um array chamado temperaturas do tipo double de 5 elemementos


Declara��o e inicializa��o:

int vals[] = {10, 20, 30, 15, 25};

ou :

int vals[5];

vals[0] = 10;
vals[1] = 20;
vals[2] = 30;
vals[3] = 15;
vals[4] = 25;

*/

//
// C�lculo da media de cinco temperaturas digitadas
// C�lculo do valor m�ximo
// C�lculo do valor m�nimo

#define NUM_TEMPS 5

int main()
{
	float temps[NUM_TEMPS];
	float soma, media, maximo, minimo;
	int i;

// carregar o array
	for (i = 0; i < NUM_TEMPS; i++)
	{
		printf("\nDigite a temperatura %d: ", i);
		fflush(stdin);	
		scanf("%f", &temps[i]);
	}

// visualizar os dados introduzidos
	printf("\nEis os valores digitados:\n\n ");
	for (i = 0; i < NUM_TEMPS; i++)
	{
		printf("\n%4.2f", temps[i]);
	}

// calcular a media
	for (i = 0, soma = 0; i < NUM_TEMPS; i++)
	{
		soma = soma + temps[i];
	}

	media = soma / NUM_TEMPS;

	printf("\n\nA Media = %4.2f", media);

// calculo valor maximo

	maximo = temps[0]; // supor q valor max � este
	for (i = 1; i < NUM_TEMPS; i++)
	{
		if (temps[i] > maximo)

			maximo = temps[i];
	}
	printf("\n\nO valor Maximo = %4.2f", maximo);

	minimo = temps[0]; // supor q valor max � este
	for (i = 1; i < NUM_TEMPS; i++)
	{
		if (temps[i] < minimo)

			minimo = temps[i];
	}

	printf("\n\nO valor Minimo = %4.2f", minimo);


	printf("\n\nDigite um carater para continuar\n\n");
	fflush(stdin);	
	getchar();

	return 0;
} // fecha o main


#include <stdio.h>
#include <stdlib.h>

// Programa REF_031_funcs_2

/* 
 
Este programa � o mesmo que o programa funcs1 com 
a diferen�a de declarar os prot�tipos das funcs

Revendo o conceito do Prot�tipo:
Prot�tipo de uma fun��o

O prot�tipo de uma fun��o � a descri��o de uma fun��o que � 
implementada em outra parte do programa.

Assim, o prot�tipo � colocado no in�cio do programa (antes 
da fun��o principal main()). 

Esta descri��o permite que o compilador "verifique" a 
validade da fun��o cada vez que ele a encontra no programa, 
indicando-lhe:

O tipo de valor retornado pela fun��o
O nome da fun��o
Os tipos de argumentos


Ao contr�rio da defini��o da fun��o, o prot�tipo n�o � seguido 
pelo corpo da fun��o (com instru��es a serem executadas), e n�o
inclui o nome dos par�metros (apenas seu tipo). 

Um prot�tipo da fun��o tem esta apar�ncia: 

Tipo_de_dado_retornado Nome_Da_Fun��o(tipo_argumento1, tipo_argumento2, 

...);

O prot�tipo � uma instru��o, ent�o, ele � acompanhado de um ponto e 

virgula!


Vejamos alguns exemplos de prot�tipos: 

void Exibir_car(char, int);

int Soma(int, int);
*/


// Prot�tipos

void boas_vindas();
int calc1(int num1, int num2);
float calc2(int a, int b);
void escreve(int n, char ch);

// Experimentos com fun��es
// 1 - Cria uma func para nos desejar as Boas vindas.
// 2 - Cria uma func para somar dois inteiros e devolver 
//	   o resultado ao programa chamante.
// 3 - Cria uma func para calcular e devolver a m�dia de 
//     dois inteiros    
// 4 - Cria uma func para imprimir um carater n vezes 
//     para delinear resultados no ecr�.

int main()
{
// Declara��o das vars
	int x, y, resultado;
	float media;

// chama uma func de Boas Vindas
	escreve(40, '-'); // imprime carater '-' 40 vezes
	boas_vindas();
	escreve(40, '-');


// chama uma func para somar dois inteiros e 
// devolver o resultado ao programa chamante.

// ler os valores digitados
	printf("\n\n\nDigite um inteiro: ");
	fflush(stdin);
	scanf("%d", &x);

	printf("\n\nDigite o outro inteiro: ");
	fflush(stdin);
	scanf("%d", &y);

	printf("\n\n\n");
	escreve(40, '*');
	resultado = calc1(x, y); // args actuais
	printf("\n\nA soma de %d com %d = %d", x, y, resultado);
	// printf("\n\nA soma de %d com %d = %d", x, y, calc1(x, y) );
	printf("\n\n");
	escreve(40, '*');
	
// chama um fun��o para calcular e devolver a 
// m�dia de dois inteiros (aten��o m�dia � float)
	
	printf("\n\n\n\n");
	escreve(40, '#');
	media = calc2(x, y);
	printf("\n\nA media de %d com %d = %4.2f", x, y, media);
	printf("\n\n");
	escreve(40, '#');

	printf("\n\n");
	system("pause");

	return 0;
	
} // fecha main


// Fun��o para nos desejar as Boas vindas.
void boas_vindas()
{
	printf("\n\nViva a todos\n\n");

} // fecha boas_vindas


// Fun��o para somar e devolver a soma de dois inteiros
int calc1(int num1, int num2)
{
	int soma;

	soma = num1 + num2;

	return  soma;

} // fecha calc1


// Fun��o para calcular e devolver a m�dia 
// de dois inteiros (aten��o m�dia � float)
float calc2(int a, int b)
{
	float m;

	m = ((float)a + (float)b) / 2;

	return m;

} // fecha calc2



// Fun��o para imprimir um carater n vezes 
void escreve(int n, char ch)
{
	int i;

	i = 0;
	while (i < n)
	{
	  printf ("%c", ch);

	  i++;
	}
} // fecha escreve



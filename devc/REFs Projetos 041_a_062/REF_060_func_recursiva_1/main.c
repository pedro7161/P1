#include <stdio.h>
#include <stdlib.h>

// Programa REF_060_func_recursiva_1

// C�lculo factorial de um numero


/* 
  C�lculo do Factorial de um n�mero usando recursividade

  O fatorial de um n�mero n � o produto de todos os seus 
  antecessores, incluindo si pr�prio e excluindo o zero. 

  A representa��o � feita pelo n�meor fatorial seguido do 
  sinal de exclama��o, n! 

  Exemplo de n�mero fatorial:

  6! = 6 . 5 . 4 . 3 . 2 . 1 = 720


  Importante: n >= 0, ou seja, n�o existe fatorial 
  para n�meros negativos.

  O fatorial de 0 ( 0! ) � 1

  O numero fatorial pode ser modificado para outras formas:

  n! = n . (n-1) . (n-2) . (n-3)!

  exemplo:

  6! = 6 . (6-1) . (6-2) . (6-3)!

  6! = 6 . 5 . 4 . 3!

  6! = 120 . 3!

  6! = 120 . 3 . (3-1) . (3-2)!

  6! = 120 . 3 . 2 . 1!

  6! = 120 . 6 = 720


  Resumidamente, e usando o n�mero 5 como exemplo, o fatorial de 5 
  � igual a 

  5 * 4 * 3 * 2 * 1 que � igual a 120.

  Portanto,

  5! = 5 * 4!

  e assim sucessivamente:

  fatorial de x = x * fatorial de ( x - 1 )


  Na resolu��o deste c�lculo, normalmente usa-se uma fun��o 
  recursiva.

  Uma fun��o recursiva � uma fun��o que se chama a si pr�pria,
  resolvendo em cada invoca��o uma parte do c�lculo, cujo valor
  parcial assim obtido fica guardado temporariamente no Stack 
  at� que sejam obtidos todos os resultados parciais.

  Neste caso, o resultado final � calculado.  

  A fun��o recursiva requer um mecanismo ou uma condi��o de 
  paragem para que n�o caia num looping infinito.

  O c�digo abaixo � elucidativo:

*/


int f1(int k)
{
	if (k == 0)  // condi��o de paragem

		return 1;
	else
		return k * f1(k-1);
}

int main()
{
	int n = 5;

	printf("\n\nO factorial de %d = %d", n,  f1(n));


	printf("\n\n");
	system("pause");

	return 0;
}



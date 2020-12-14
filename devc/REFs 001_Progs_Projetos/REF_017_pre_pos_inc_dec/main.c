#include <stdio.h>
#include <stdlib.h>
 
/*
  Programa REF_017_pre_pos_inc_dec
  
  Pr� e p�s incrementos/decrementos

  A var � incrementada/decremantada uma unidade, afectando
  o seu valor na mem�ria.

  No pr� a var � actualizada antes da sua interveniencia
  em qualquer opera��o (aritm�tica, l�gica, relacional, 
  de taribui��o, impress�o, etc.).

  Exemplos de pr�:

  k = 5
  ++k incrementa efetivamente (mesmo que k = k + 1) k de 5 
      para 6 antes da sua interveni�ncia em qualquer opera��o.

  k = 10
  --k decrementa efetivamente (mesmo que k = k - 1) k de 10 
      para 9 antes da sua interveni�ncia em qualquer opera��o.


Exemplos de p�s:

  k = 5
  k++ incrementa efetivamente (mesmo que k = k + 1) k de 5 
      para 6 ap�s a sua interveni�ncia em qualquer opera��o.

  k = 10
  k-- decrementa efetivamente (mesmo que k = k - 1) k de 10 
      para 9 ap�s a sua interveni�ncia em qualquer opera��o.
*/


// Exemplos reais

int main()
{
	int i, j, k, w;

	i = 2;
	k = 4;

	w = ++i * k++;

	printf("\nw = %d", w);
	printf("\ni = %d", i);
	printf("\nk = %d", k);


	printf("\n\n\n");
	i = 0;
	k = 2;
	j = 1;

	w = i++ + --k + ++j;

	printf("\nw = %d", w);
	printf("\ni = %d", i);
	printf("\nk = %d", k);
	printf("\nj = %d", j);

	printf("\n\n");
	system("PAUSE"); 
	
	return 0;

}



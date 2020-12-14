#include <stdio.h>
#include <stdlib.h>

// Programa REF_034_scope1_vars

/* 
	Vars Locais scope 1 vars

	S�o as vars declaradas dentro das fun��es.
	
    	As vars declaradas dentro de uma fun��o s�o locais, 
	ou seja, o seu �mbito (scope) limita-se � func onde 
	foram declaradas.

	Portanto, o valor de uma var numa fun��o � somente 
	do conhecimento da fun��o a que pertence.

	Vejamos os exemplos constantes neste programa.
*/

void mostra_vars()
{

// Aten��o que estas duas vars (x, y) abaixo declaradas n�o 
// s�o as mesmas vars x, y que foram declaradas na func main

	int x, y; // vars locais a esta func (mostra_vars)

	x = 333;
	y = 555;

	printf("\n\n O valor de x na func mostra_vars = %d", x );
	printf("\n\n O valor de y na func mostra_vars = %d", y );
}

int main()
{
	int x, y; // vars locais a esta func (main)

	x = 10;
	y = 20;

	printf("\n\n O valor de x no main = %d", x );
	printf("\n\n O valor de y no main = %d", y );

// chama func mostra_vars

	mostra_vars();

// regressa aqui depois de executar a func mostra_vars

	printf("\n\n O valor de x no main continua como inicial = %d", x 

);
	printf("\n\n O valor de y no main continua como inicial = %d", y 

); 
 
	printf("\n\n");
	system("pause");

	return 0;
}


#include <stdio.h>
#include <stdlib.h>

// Programa REF_035_scope2_vars

/* 	
	Vars Globais
	
    	As vars globais s�o as vars declaradas fora de qualquer
	fun��o (antes da fun��o main).

	Isto significa que o seu �mbito (scope) � vis�vel em 
	todo o programa, podendo assim ser acedidas, alteradas
	e partilhadas por qualquer parte do programa, incluindo,
 	naturalmente fun��es.

	Desta forma, uma var global sendo alterada � efetivamente
	alterada em todo o programa, dado que o conhecimento do 
	seu valor � global.

	N�o devem ser redeclaradas novamente dentro de fun��es,
	j� que causam conflito de declara��es (e de �mbito).

	Vejamos os exemplos constantes neste programa.
*/

// declara��o das vars globais
int x = 10;
int y = 20;

void mostra_vars()
{
	printf("\n\n O valor de x na func mostra_vars = %d", x );
	printf("\n\n O valor de y na func mostra_vars = %d", y );

// Vamos agora alterar os valores das var x, y.
// Como o seu acesso � universal, esta ac��o vai ser 
// efetivamente partilh�vel por todo o programa.

	x = 50;
	y = 60;

	printf("\n\n Os novos valores de x e y apos alteracao sao: \n");
	printf("\n O novo valor de x na func mostra_vars = %d", x );
	printf("\n O novo valor de y na func mostra_vars = %d", y );
}

int main()
{
	printf("\n\n O valor de x no main = %d", x );
	printf("\n\n O valor de y no main = %d", y );

// chama func mostra_vars

	mostra_vars();

// regressa aqui depois de executar a func mostra_vars

	printf("\n\n Os novos valores de x e y alterados em outra func sao: \n\n");
	printf("\n\n O valor de x no main agora  = %d", x );
	printf("\n\n O valor de y no main agora  = %d", y );

	printf("\n\n");
	system("pause"); // requer a biblioteca stdlib.h
	
	return 0;
}


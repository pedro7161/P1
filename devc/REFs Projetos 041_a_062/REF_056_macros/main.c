#include <stdio.h>
#include <stdlib.h>

// Programa REF_056_macros

// As macros s�o partes de c�digo implementadas, no inicio 
// do programa, logo a seguir �s declara��es dos #includes.

// Assemelham-se a fun��es, mas t�m uma natureza completamente
// diferente.

// As macros s�o processadas pelo pre-processador
// O Pre-processador � um programa que processa o c�digo
// antes de chegar ao compilador. 
// Assim o c�digo das macros sao muito elementares, nao t�m o
// conhecimento de tipos de dados, limitam-se assim a fazer 
// substitui��es.
//
// Uma macro � definida atrav�s do comando #define
// As macros funcionam atrav�s de um processo de substitui��o,
// onde um identificador num programa � substitu�do por uma string
// pr� definida.
//
// A sintaxe � a seguinte:
//
// #define identificador string
//
// O preprocessador substitui toda a ocorr�ncia do identificador
// no c�digo pela string.
//
// Exemplo:
//
// #define CUBO(x) (x * x * x)
//
// o qual resultar� depois de uma chamada do tipo:
//
//	volume = CUBO(lado);
// 
// na substitu��o em:
//
// volume = (lado * lado * lado)
//
// Na defini��o da macro n�o terminar com ; porque daria erro
// j� que ; iria fazer parte da substitui��o

#define MAX 100
#define CUBO(x) (x * x * x)

void main()
{
	int x = MAX;
	printf("\n\nO Valor maximo = %d", x);

	int lado = 2;
	int volume;

	volume = CUBO(lado);

	printf("\n\nO volume = %d", volume);

	printf("\n\n\n");
	system("pause");

	return;
}

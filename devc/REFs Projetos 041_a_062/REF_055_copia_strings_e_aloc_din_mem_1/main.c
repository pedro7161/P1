#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Programa REF_055_copia_strings_e_aloc_din_mem_1

// C�pia de strings e introdu��o � aloca��o din�mica de Mem�ria

// C�pia de strings, aplicando em revis�o a primitiva strcpy()
//
// e tamb�m aplica aloca��o din�mica de Memoria
// na manipula��o de c�pias de strings (sem uso 
// da primitiva strcpy)
// Ou seja, vamos simular o que strcpy() faz.
//

int main(int argc, char *argv[])
{
// c�pia de strings com o comando strcpy() - em revis�o - 
// sem aloca��o din�mica de mem�ria

	char fonte[30] = "lisboa";
	char destino[30];

	strcpy(destino, fonte);

	printf("\n\n strcpy: Sem alocacao dinamica de Memoria\n");
	printf("\n Fonte: %s", fonte);
	printf("\n\n Copia: %s", destino);

// c�pia de strings com o comando strcpy() com aloca��o 
// din�mica de mem�ria

	printf("\n\n strcpy: Com alocacao dinamica de Memoria\n");

// o comando abaixo declara uma string atrav�s de ptrs
// faz o mesmo que:
//
// char orig[30];
//
	char *orig = "janeiro"; 

// alocar dinamicamente espa�o de M para o destino

// o comando malloc obt�m uma �rea de M livre para nosso uso
// devolve o endere�o da primeira posicao da area de M
// este endere�o deve ser atribuido a um ptr do tipo de dados
// que vai conter a area de M que nos foi concedida (alocada)
//
// no comando malloc temos tab�m que indicar para que tipo 
// de dados pretendemos utilizar essa area
//

	char *dest = (char *) malloc (30);

	if (dest == NULL) printf("\nNao Ha M livre");
	
	strcpy(dest, orig);

	printf("\n\n"); 
	puts(orig);
	puts(dest);

//
//
// repetir o processo anterior mas simulando a func 
// strcpy
// ou seja, vamos percorrer a mem�ria
// sendo assim, nunca podemos perder de vista 
// o inicio da area livre e da mem�ria apontada.
//
// na execu��o anterior as primitivas strcpy e puts
// mantiveram os inicios intactos das memorias
//
	char *inicioDest = dest; // guarda endereco inicial de dest
	char *inicioOrig = orig; 

/*
	while (*orig)
	{
		*dest++ = *orig++;
	}
*/
// o ciclo acima pode ser substitu�do pelo
// pela simples linha de c�digo;

	while(*dest++ = *orig++);


// reset ptrs para o inicio

	orig = inicioOrig;
	dest = inicioDest;

	puts(orig);
	puts(dest);
	
	printf("\n\n");
	system("pause");

	return 0;
}


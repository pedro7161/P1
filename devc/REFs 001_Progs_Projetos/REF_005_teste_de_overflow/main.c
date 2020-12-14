#include <stdio.h>
#include <stdlib.h>
 
// Programa REF_005_teste_de_overflow
 
// Experimentos com overflow de dados

/*
 	Este programa serve somente para se conhecer o que acontece a um 
	dado quando se lhe atribui um valor superior à sua capacidade.
	
	Causa transbordo!
*/

int main()
{
	short int val1; //vai de -32768 a 32767

/*
	Carregando em val1 um valor acima de 32767 vai causar transbordo,
	subtraindo a parte excedente do lado negativo, dando assim a volta 
	da parte positiva para a negativa.
*/			

	val1 = 32770; // overflow

	printf("\n\nO valor de Val1 devia ser 32770, mas ficou = %hd", val1);
	
	
	printf("\n\n\n");
    system("PAUSE");
	
	return 0;
}








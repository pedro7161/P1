#include <stdio.h>
#include <stdlib.h>

// Programa REF_010_switch_1
 
/*
  	Aplica��o da estrutura switch

   	programa que diz o dia da semana por extenso
   	em resposta a um valor digitado de 1 a 7

   	Este programa utiliza a estrutura de controlo
   	switch() em vez do if, else if
*/

int main( )
{
	int dia;

	printf("\nDigite um valor de 1 a 7: ");
	fflush(stdin);
	scanf("%d",  &dia);

	switch (dia)
	{
		case 1:	printf("\nDomingo\n");
			break;
		
		case 2:	printf("\nSegunda\n");
			break;
		
		case 3:	printf("\nTerca\n") ;
				break;
		
		case 4:	printf("\nQuarta\n") ;
				break;
		
		case 5:	printf("\nQuinta\n" );
				break;
		
		case 6:	printf("\nSexta\n" );
				break;
		
		case 7:	printf("\nSabado\n") ;
				break;
		
		default:printf("\nDia incorrecto\n");
				break;
	}

	printf("\n\n");
	system("pause");

	return 0;
}


#include <stdio.h>
#include <stdlib.h>

// Programa REF_008_ifs_2
 
/* 
   Exemplo estrutura if else if

   Programa que diz o dia da semana por extenso
   em resposta a um valor digitado de 1 a 7.

   Nesta vers�o vamos usar a estrutura if else if
   Esta � a maneira mais adequada para este tipo de programa
   j� que nesta estrutura o teste termina logo que seja encontrado
   um caso verdadeiro.

*/

int main()
{
	int dia;

	printf("\n\nDigite um dia da semana de 1 a 7: ");
	fflush(stdin);
	scanf("%d", &dia);
	
	if (dia == 1)
	{
		printf("\nDomingo");		
	}	
	else if (dia == 2)
	{
		printf("\nSegunda");		
	}	
	else if (dia == 3)
	{
		printf("\nTerca");		
	}	
	else if (dia == 4)
	{
		printf("\nQuarta");		
	}	
	else if (dia == 5)
	{
		printf("\nQuinta");		
	}
	else if (dia == 6)
	{
		printf("\nSexta");		
	}	
	else if (dia == 7)
	{
		printf("\nSabado");		
	}	
	else
	{
		printf("\n\nDia errado");
	}
	
	printf("\n\n");
	system("PAUSE");
		
	return 0;
}



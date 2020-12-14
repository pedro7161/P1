#include <stdio.h>
#include <stdlib.h>

// Programa REF_009_ifs_3

/* 
   Este programa avalia uma nota de exame consoante as seguintes condições:
   
   se nota >= 9.5, "Aprovado"
   
   se nota >= 8.0 e nota < 9.5, "Oral"
   
   se nota >= 0 e nota < 8, "Reprovado"
   
   Se nota fora dos valores ente 0 e 20, Valor da nota errado
   
*/

int main()
{
	float nota;

// Há muitas maneiras diferentes de implementar a lógica
// da estrutura if para este programa.
// Esta é simplesmente uma delas.

	printf("\n\nDigite uma nota de exame: ");
	fflush(stdin);
	scanf("%f", &nota);
	
	if ( (nota < 0) || (nota > 20))
	{
		printf("\n\nO Valor da nota %4.2f = incorreto", nota);			
	}
	else
	{
		if (nota >= 9.5)
		{
			printf("\n\nA Nota %4.2f = Aprovada", nota);
		}
		else if ((nota >= 8) && (nota < 9.5))
		{
			printf("\n\nA Nota %4.2f = Oral", nota);				
		}
		else
		{
			printf("\n\nA Nota %4.2f = Reda", nota);
		}		
	}
 
	printf("\n\n");
	system("PAUSE");
	
	return 0;
}


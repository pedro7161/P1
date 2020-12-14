#include <stdio.h>
#include <stdlib.h>

// Programa REF_020_ciclos_5_encaixados

// Ciclos encaixados

// s�o ciclos dentro de ciclos
// sempre que um ciclo encaixado � iniciado somente termina
// o seu processo repetitivo quando a sua condi��o deixar de
// ser satisfeita, voltando o controlo para o ciclo externo
//

int main()
{
	printf("\n\nUsando while:\n");
	int i, k;
	
	i = 0;
	while (i < 2)
	{
		printf("\nViva\n");
		k = 0;
		while(k < 3)
		{
			printf(" Lumiar");
			k++;// atualiza ctdr ciclo interno
		}

		i++; // atualiza ctdr ciclo externo
	}

// usando ciclo for

	printf("\n\n\nUsando for:\n");

	for (i = 0; i < 2; i++)
	{
		printf("\nViva\n");

		for(k = 0; k < 3; k++)
		{
			printf(" Tejo");
		}
	}

	printf("\n\n");
	system("PAUSE");

	return 0; 
}

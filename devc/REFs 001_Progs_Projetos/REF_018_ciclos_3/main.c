#include <stdio.h>
#include <stdlib.h>

// Programa REF_018_ciclos_3

// Aplica e demonstra o funcionamento do ciclo "do while"


int main()
{
	int k = 0;

	do
	{
	  printf("\nEstamos no ciclo do while: %d", k);

	  k++;  	
	} while (k < 10);
	
	
	printf("\n\n\n");

	system("PAUSE");
	
	return 0;
}


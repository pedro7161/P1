#include <stdio.h>
#include <stdlib.h>
 
// Programa REF_011_par_impar

// Programa que determina se um inteiro digitado é par ou ímpar

 
int main()
{
	int num;
	
	printf("\nDigite valor inteiro: ");
	fflush(stdin);
	scanf("%d", &num);

	if ((num % 2 ) == 0)
	{
		printf("\n\nO numero %d = Par", num);	
	}
	else
	{
		printf("\n\nO numero %d = Impar", num);
	}
	
	printf("\n\n\n");
	getchar();
	
	return 0;

} //fecha main



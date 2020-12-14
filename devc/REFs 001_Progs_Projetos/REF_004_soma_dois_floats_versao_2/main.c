#include <stdio.h>
#include <stdlib.h>
 
// Programa REF_004_soma_dois_floats_versao_2

// Igual ao programa anterior, mas eliminando uma variável ao
// ser calculado o resultado no próprio printf

int main()
{
	float x, y;

	printf("\n Digite o Valor 1: ");
	fflush(stdin);
	scanf("%f", &x);

	printf("\n Digite o Valor 2: ");
	fflush(stdin);
	scanf("%f", &y);

	printf("\n\nA soma de %4.2f com %4.2f = %4.2f", x, y, (x + y));

	printf("\n\n\n");
    system("PAUSE");
	
	return 0;
}



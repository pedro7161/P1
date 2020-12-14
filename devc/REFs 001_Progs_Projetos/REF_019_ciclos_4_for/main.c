#include <stdio.h>
#include <stdlib.h>

// Programa REF_019_ciclos_4_for

// Aplica��o do ciclo for
//
// O ciclo for � constituido por tr�s partes
// Uma parte para inicializa��o das vars
// Uma parte para teste, a condi��o
// Uma parte para atualiza��o das vars

// Exemplo: 
// 
// Calculo m�dia de cinco temperaturas
//

#define NUM_TEMPS 5

int main()
{
	float temp, soma, media;
	int i;

	for(i = 0, soma = 0; i <  NUM_TEMPS; i++)
	{
		printf("\nDigite a proxima temperatura %d: ", i);
		fflush(stdin);
		scanf("%f", &temp);

		soma = soma + temp;	
	}

	media = soma / NUM_TEMPS;

	printf("\n\n A Media das temperaturas = %4.2f\n\n", media);
	system("PAUSE");	
  
    	return 0;

} // fecha o main


#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // para usar acentua��o

#define PI 3.14159265359 // defini��o da constante PI
 
// Programa REF_006_area_circulo  
 
// Este programa calcula a �rea de um c�rculo

// F�rmula: area = PI * (raio * raio)

// O valor do raio deve ser digitado

int main()
{
	setlocale(LC_ALL, "Portuguese"); // defini��o da L�ngua-acentua��o	
	
	float area, raio;
	
	printf("\n\nDigite o valor do raio: ");
	fflush(stdin);
	scanf("%f", &raio);
	
	area = PI * (raio * raio);
	
	printf("\n\n�rea do C�rculo com raio %4.2f = %4.2f", raio, area);
	
	printf("\n\n\n");
    system("PAUSE");
	
	return 0;
}










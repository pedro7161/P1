#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // para usar acentuação

#define PI 3.14159265359 // definição da constante PI
 
// Programa REF_006_area_circulo  
 
// Este programa calcula a área de um círculo

// Fórmula: area = PI * (raio * raio)

// O valor do raio deve ser digitado

int main()
{
	setlocale(LC_ALL, "Portuguese"); // definição da Língua-acentuação	
	
	float area, raio;
	
	printf("\n\nDigite o valor do raio: ");
	fflush(stdin);
	scanf("%f", &raio);
	
	area = PI * (raio * raio);
	
	printf("\n\nÁrea do Círculo com raio %4.2f = %4.2f", raio, area);
	
	printf("\n\n\n");
    system("PAUSE");
	
	return 0;
}










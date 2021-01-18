#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

#define PI 3.14159

// Programa REF_081_cpp_classe_circulo_versao_2

// Classe Circulo - Versão 2

// Nesta versão os métodos são void já que guardam os resultados
// em atributos em vez de devolvê-los.

class Circulo
{
public:

// Atributos
	float raio;
	float A;	// variável para guardar a área
	float P;	// variável para guardar o perímetro	
	

// Funçoes/métodos
	
	void area() // calcula a área 
	{
		A = (PI * (raio * raio));
	}

	void perimetro()
	{
		P = (2 * PI * raio); // calcula o Perímetro
	}
};


int main()
{
	Circulo circ1;
	Circulo circ2;

// Tratamento objeto circ1

	circ1.raio = 5;

	circ1.area(); // calculo da área do objeto circ1	
	circ1.perimetro(); // calculo do Perímetro do objeto circ1
	
	printf("\n\nA Area de um Circulo com raio de %4.2f = %4.2f", circ1.raio, circ1.A);
	
	printf("\nO perimetro de um Circulo com raio de %4.2f = %4.2f", circ1.raio, circ1.P);


// Tratamento objeto circ2
	circ2.raio = 7;

	circ2.area(); // calculo da área do objeto circ1	
	circ2.perimetro(); // calculo do Perímetro do objeto circ1
	printf("\n\nA Area de um Circulo com raio de %4.2f = %4.2f", circ2.raio, circ2.A);
	
	printf("\nO perimetro de um Circulo com raio de %4.2f = %4.2f", circ2.raio, circ2.P);

	printf("\n\nDigite uma tecla para sair\n");
	fflush(stdin);
	getchar();
	return 0;
}


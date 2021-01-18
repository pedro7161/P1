#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

#define PI 3.14159

// Programa REF_081_cpp_classe_circulo_versao_2

// Classe Circulo - Vers�o 2

// Nesta vers�o os m�todos s�o void j� que guardam os resultados
// em atributos em vez de devolv�-los.

class Circulo
{
public:

// Atributos
	float raio;
	float A;	// vari�vel para guardar a �rea
	float P;	// vari�vel para guardar o per�metro	
	

// Fun�oes/m�todos
	
	void area() // calcula a �rea 
	{
		A = (PI * (raio * raio));
	}

	void perimetro()
	{
		P = (2 * PI * raio); // calcula o Per�metro
	}
};


int main()
{
	Circulo circ1;
	Circulo circ2;

// Tratamento objeto circ1

	circ1.raio = 5;

	circ1.area(); // calculo da �rea do objeto circ1	
	circ1.perimetro(); // calculo do Per�metro do objeto circ1
	
	printf("\n\nA Area de um Circulo com raio de %4.2f = %4.2f", circ1.raio, circ1.A);
	
	printf("\nO perimetro de um Circulo com raio de %4.2f = %4.2f", circ1.raio, circ1.P);


// Tratamento objeto circ2
	circ2.raio = 7;

	circ2.area(); // calculo da �rea do objeto circ1	
	circ2.perimetro(); // calculo do Per�metro do objeto circ1
	printf("\n\nA Area de um Circulo com raio de %4.2f = %4.2f", circ2.raio, circ2.A);
	
	printf("\nO perimetro de um Circulo com raio de %4.2f = %4.2f", circ2.raio, circ2.P);

	printf("\n\nDigite uma tecla para sair\n");
	fflush(stdin);
	getchar();
	return 0;
}


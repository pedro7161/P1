#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

#define PI 3.14159

// Programa REF_080_cpp_classe_circulo

// Calcula a Area e o Perimetro de um Circulo 
// usando uma classe com dois m�todos

class Circulo
{
public:

	float raio;
	
	float area()
	{
		return (PI * (raio * raio));
	}

	float perimetro()
	{
		return (2 * PI * raio);
	}
};

int main()
{
	Circulo circ1;
	Circulo circ2;

	cout << endl << "Digite o Raio do Circulo 1: ";
	cin >> circ1.raio;

	cout << endl << "Area do Circulo 1 = "		 
		 << circ1.area() << endl;
	
	cout << endl << "Perimetro do Circulo 1 = "
		 << circ1.perimetro() << endl << endl;


	cout << endl << "Digite o Raio do Circulo 2: ";
	cin >> circ2.raio;
	
	cout << endl << "Area do Circulo 2 = " 
		 << circ2.area() << endl;

	cout << endl << "Perimetro do Circulo 1 = "
		 << circ2.perimetro() << endl << endl << endl;

	cout << "Digite uma tecla para sair" << endl << endl;
	fflush(stdin);
	getchar();
	return 0;
}










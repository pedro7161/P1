#include <stdio.h>
#include <iostream>
#include <stdlib.h>
 
using namespace std;

// Programa REF_077_cpp_outro_exemplo

// C++

// Cálculo da média de cinco salarios,lidos do
// teclado através da primitiva cin, um a um, 
// para um vector unidimensional

int main()
{
	int i; // contador-índice
	double soma, media;

	double sals[5]; // Array de cinco doubles

	soma = 0;
	i = 0;

	// carregar array com salarios
	while (i < 5)
	{
		cout << endl << "Digite o Salario seguinte: ";
		
		cin >> sals[i];
		cout << endl;
	
		i++;
	}

// ver o array digitado

	cout << endl << "Os valores digitados sao:" 
		 << endl << endl;
	i = 0;
	while (i < 5)
	{
		cout << sals[i] << endl;
		i++;
	}

// Calcular media

	i = 0; // Reset 
	while ( i < 5 )
	{
		soma = soma + sals[i];
		i++;
	}
	media = soma / 5;

	cout << endl << endl << "A Media = " << media;

	cout << endl << endl;
	system("pause");
	return 0;
}









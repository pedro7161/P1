#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

// Programa REF_087_cpp_overload

/* 
	Objetivo:

	Dar a conhecer e praticar o seguinte conceito da Programa��o
	Orientada a Objetos (POO):

	Overload

   	Overload ou sobrecarga de m�todos (fun��es) � uma t�cnica de
   	programa��o, presente nas linguagens orientadas a classes e
   	objetos, que permite a cria��o de v�rias fun��es com o mesmo
   	nome dentro do mesmo programa.

   	Estas fun��es distinguem-se entre si atrav�s das suas diferentes
   	assinaturas, ou seja, pelo seu diferente n�mero ou tipo de args.

   	Neste programa usa-se tr�s fun��es, todas chamadas de soma, em 
   	tr�s diferentes aplica��es: uma soma de dois inteiros, uma soma
   	de dois floats e uma soma de um valor inteiro em si pr�prio.
*/

// Soma de dois valores inteiros

int soma(int val1, int val2) // em overload
{
	return (val1 + val2);
}

// Soma de dois valores floats

float soma(float a, float b) // em overload
{
	return (a + b);
}


// Soma de um inteiro a si pr�prio

int soma(int x) // em overload
{
	return (x + x);
}


int main()
{
	int n1, n2;
	float a, b;

	cout << endl << "Digite Valor inteiro 1: ";
	cin >> n1;
	cout << endl << "Digite Valor inteiro 2: ";
	cin >> n2;

	cout << endl << "A Soma de " << n1 << " com " << n2 << " = " << soma(n1, n2);
	cout << endl << "\nA Soma de " << n1 << " com " << n1 << " = " << soma(n1);

	cout << endl << endl << "Digite Valor float 1: ";
	cin >> a;
	cout << endl << "Digite Valor float 2: ";
	cin >> b;

	cout << endl << endl << "A Soma de " << a << " com " << b << " = " << soma(a, b);

	cout << endl << endl;
	system("pause");
	
	return 0;
}


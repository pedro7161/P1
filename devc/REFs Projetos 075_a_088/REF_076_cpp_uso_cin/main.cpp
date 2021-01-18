#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

// Prgrama REF_076_cpp_uso_cin

// C++

// Aplicação da função primitiva cin

// cin significa extrai do stream

// Soma de dois inteiros digitados

int main()
{

	int num1, num2, soma;

	cout << endl << "Digite Valor 1: ";
	cin >> num1;

	cout << endl << "Digite Valor 2: ";
	cin >> num2;

	soma = num1 + num2;
	
	cout << endl << endl << "A Soma de " << num1 << " com " << num2 << " = " << soma;

	cout << endl << endl;
	system("pause");
	return 0;
}









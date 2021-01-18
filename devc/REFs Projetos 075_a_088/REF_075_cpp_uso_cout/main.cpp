#include <stdio.h>
#include <iostream>
#include <stdlib.h>
 
using namespace std;

// Prgrama REF_075_cpp_uso_cout

/* 
	Introdu��o � Linguagem C++
	
   	Uso da primitiva cout

   	Programa Boas Vindas em C++

   	C++ � uma Linguagem baseada e orientada para objectos

   	As classes permitem o encapsulamento (information hiding)
   	da informa��o e a reutiliza��o de software.

   	Um exemplo disto � aplicado neste programa atrav�s do 
   	m�todo cout que pertence ao espa�o de nomes std.

   	cout � a primitiva equivalente � fun��o printf (C puro),
   	s� que cout deteta implicitamente os tipos dos dados a
   	imprimir, pelo que dispensa assim a sua especifica��o.

   	cout significa "insere no stream".

*/

/*
  O comando abaixo � uma indica��o pr�via da utiliza��o do espa�o 
  de nomes standard std.

	using namespace std;

  Isto evita termos comandos tais como:

 	std::cout << "Viva" << std::endl;
*/


int main()
{
	cout << endl << "\tViva Mundo!" << endl;

	cout << endl << endl;

	system("pause");
	return 0;
}










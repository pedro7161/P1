#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

//  Programa REF_088_cpp_classe_com_contrutor_default

/*
	Objetivo:

	Dar a conhecer e praticar o seguinte conceito da Programação
	Orientada a Objetos (POO):

	Construtor default

	Este programa aplica o conceito do construtor default que é um 
	construtor vazio de args que deve ser usado quando temos outros 
	construtores não default e precisamos de criar um objecto sem 
	qualquer inicialização de data members aquando da sua instanciação.
*/

class CRect
{
public:
	int largura, altura;
	
	int perimetro()
	{
		return ((altura * 2)+(largura * 2));
	}

	CRect(int alt, int larg) // construtor 1 em overload
	{
		altura = alt;
		largura = larg;
	}


	CRect() // construtor 2 em overload e default (vazio)
	{
	
	}	
};

int main()
{
	CRect rect1(60,80);
	
	CRect rect2(90,60);
	
	CRect rect3;

	cout << endl << "Perimetro do objecto Rect1 = "
		 << rect1.perimetro()
		 << " Pixeis" << endl << endl;

	cout << endl << "Perimetro do objecto Rect2 = "
		 << rect2.perimetro()
		 << " Pixeis" << endl << endl;

	rect3.altura = 30;
	rect3.largura = 40;
	
	cout << endl << "Perimetro do objecto Rect3 = "
		 << rect3.perimetro()
		 << " Pixeis" << endl << endl;

	cout << "Um objecto CRect ocupa " << sizeof(rect1)
		 << " bytes";

	cout << endl << endl;
	fflush(stdin);
	getchar();
	return 0;
}

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
 
using namespace std;

// Programa REF_079_cpp_classe_com_metodo

class CRect
{
public:
	int largura, altura;
	
	int perimetro()
	{
		return ((altura * 2) + (largura * 2));
	}
};

int main()
{
	CRect rect1;
	CRect rect2;

	rect1.largura = 30;
	rect1.altura = 60;
	rect2.largura = 40;
	rect2.altura = 80;

	cout << endl << "Perimetro do objecto Rect1 = "
		 << rect1.perimetro()
		 << " Pixeis" << endl << endl;

	cout << endl << "Perimetro do objecto Rect2 = "
		 << rect2.perimetro()
		 << " Pixeis" << endl << endl;

	cout << "Um objecto CRect ocupa " << sizeof(rect1)
		 << " bytes";

	cout << endl << endl;
	fflush(stdin);
	getchar();
	return 0;
}



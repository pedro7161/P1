#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

// Programa REF_086_cpp_classe_com_construtor

/*
	Objetivo:

	Dar a conhecer e praticar o seguinte conceito da Programa��o
	Orientada a Objetos (POO):

	O Construtor

	Este programa inclui um construtor.

	O construtor � um m�todo opcional que � chamado automaticamente 
	no momento da instancia��o de um objecto.

	� opcional porque somente incluimos o construtor no nosso c�digo
	quando pretendemos inicializar os ou alguns dos nossos atributos
	no momento da cria��o de um objeto.

	A sua finalidade � inicializar os data members que desejarmos.

	O construtor:

		� opcional
		Tem que ter o mesmo nome da classe
		N�o tem tipo de dados (nem void)
		Porque nao pode devolver qualquer valor

	Por conseguinte, este programa opta por inicializar os seus data 
	members usando o construtor
*/

class CRect
{
public:
	int largura, altura;
	
	int perimetro()
	{
		return ((altura * 2)+(largura * 2));
	}

// O construtor
// forma completa
// todo o objecto instanciado tem que passar, neste exemplo, dois args, 
// um para altura, outro para a largura.

	CRect(int alt, int larg)
	{
		altura = alt;
		largura = larg;
	}
};

int main()
{
	CRect rect1(60,80);
		
	CRect rect2(90,60);
	
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


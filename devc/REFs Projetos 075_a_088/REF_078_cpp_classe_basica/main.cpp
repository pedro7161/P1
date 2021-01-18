#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
 
// Programa REF_078_cpp_classe_basica

/*
   Uma classe � um programa refer�ncia que funciona como modelo 
   ou template. 

   Como programa refer�ncia torna-se apenas �acess�vel� atrav�s 
   das suas inst�ncias, que s�o como c�pias, r�plicas concretas,
   os chamados objectos.

   Ou seja, as classes para poderem ser utilizadas devem ser 
   instanciadas, processo que consiste na cria��o de objectos, 
   os quais s�o r�plicas acess�veis e utiliz�veis da classe.

   Na sua forma, Uma classe � um tipo definido pelo programador, 
   semelhante a uma estrutura, mas com a capacidade de poder 
   conter fun��es.

   Os dados da classe s�o conhecidos por atributos, propriedades 
   ou caracetr�sticas.

   As fun��es s�o conhecidas por m�todos da classe. Elas v�o agir 
   sobre os dados da classe.	 

   Vejamos um exemplo de uma classe b�sica:
*/

class CRect
{
public:
	int largura, altura;
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
		 << (rect1.altura * 2) + (rect1.largura * 2)
		 << " Pixeis" << endl << endl;

	cout << endl << "Perimetro do objecto Rect2 = "
		 << (rect2.altura * 2) + (rect2.largura * 2)
		 << " Pixeis" << endl << endl;

	cout << "Um objecto CRect ocupa " << sizeof(rect1)
		 << " bytes";

	cout << endl << endl;
	fflush(stdin);
	getchar();
	return 0;
}



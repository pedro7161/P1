#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

// REF_083_cpp_salarios_02

/* 	
	Nova versão do programa sobre salários
	
	Mesmo que o programa anterior mas alterando a função para
	retornar o resultado que é o valor do salário líquido.
	
	Relembrando o enunciado do programa anterior:
	
	Escreva um programa, orientado para objetos e para cálculos simples 
   	de salários, constituído por uma classe com os seguintes members:
	
	Data (atributos ou propriedades):
	
		long num
		float salario_bruto
		float taxa_irs
		
	Methods (funções):
	
		calc_salario_liquido()
		
	O programa deve calcular o salário líquido de dois objetos
	do tipo empregado.

*/ 

class Empregado
{
public:

	long num;
	float salario_bruto;
	float taxa_irs;
	
	float calc_salario_liquido()
	{
		return (salario_bruto - (salario_bruto * taxa_irs));
	}
};

int main()
{
	Empregado emp1;
	Empregado emp2;
	
	cout << endl << "Digite o Numero do empregado: ";
	cin >> emp1.num;
	
	cout << endl << "Digite o Salario Bruto: ";
	cin >> emp1.salario_bruto;

	cout << endl << "Digite a Taxa IRS: ";
	cin >> emp1.taxa_irs;

	cout << endl;
	cout << "Dados salariais do Empregado Numero " << emp1.num << endl;
	
	cout << endl << "Salario Bruto = "	<< emp1.salario_bruto << endl;
	
	cout << endl << "Taxa de IRS = " << emp1.taxa_irs << endl;

	cout << endl << "Salario Liquido = " << emp1.calc_salario_liquido() << endl;

	cout << endl << "Digite uma tecla para sair" << endl << endl;
	fflush(stdin);
	getchar();
	return 0;
}


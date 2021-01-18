#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

// Programa REF_084_cpp_salarios_03

/* 	
	Nova Versão dos programas sobre salários
	
	3.	Crie uma classe empregado, com os seguintes atributos:

		numero
		salBruto
		salLiquido
		taxaIRS
		taxaSS

E os seguintes métodos:

		calcIRS()
		calcSS()
		calcSalLiquido()

Desenvolva um programa para calcular o salário líquido de um 
empregado objeto.

O salário líquido é o salário bruto menos a soma dos descontos 
(ou seja, IRS + SS)

*/ 

class Empregado
{
public:

	long num;
	float salario_bruto;
	float taxa_irs;	
	float taxa_SS;	
	
	float calcIRS(){
		
		return (salario_bruto * taxa_irs);
	}
	
	float calcSS(){
		
		return (salario_bruto * taxa_SS);
	}
	
	float calc_salario_liquido()
	{
		return (salario_bruto - (calcIRS() + calcSS()));
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

	cout << endl << "Digite a Taxa SS: ";
	cin >> emp1.taxa_SS;

	cout << endl;
	cout << "Dados salariais do Empregado Numero " << emp1.num << endl;
	
	cout << endl << "Salario Bruto = "	<< emp1.salario_bruto << endl;
	
	cout << endl << "Taxa de IRS = " << emp1.taxa_irs << endl;

	cout << endl << "Taxa de SS = " << emp1.taxa_SS << endl;
	
	cout << endl << "Salario Liquido = " << emp1.calc_salario_liquido() << endl;

	cout << endl << "Digite uma tecla para sair" << endl << endl;
	
	fflush(stdin);
	getchar();
	return 0;
}

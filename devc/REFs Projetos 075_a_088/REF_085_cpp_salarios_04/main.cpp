#include <stdio.h>
#include <iostream>
#include <stdlib.h>

#define TAXA_SS 0.11

using namespace std;

// REF_085_cpp_salarios_04

/* 
	Outra Versão dos programas sobre salários
	
	Reutilize os programas anteriores e adapte-os de forma a acomodar 
	as seguintes funcionalidades e condições:
	
	1.	Crie uma classe empregado, com os seguintes atributos:
	
		numero 
		salBruto
		salLiquido
		taxaIRS

		E os seguintes métodos:
		
		calcIRS()
		calcSS()
		calcSalLiquido()

		A Taxa IRS é calculada, levando em consideração as seguintes 
		condições:

			Se salário bruto >= 2000.00, taxa IRS = 25%
		
			Se salário bruto >= 1000.00 && < 2000.00, taxa IRS = 20%
		
			Se salário bruto < 1000.00, taxa IRS = 17.5%
	
		A Taxa SS é fixa: 	11%
*/ 

class Empregado
{
public:

	long num;
	float salario_bruto;
	float taxa_irs;	
	
	void calc_taxa_irs(){
		
		if (salario_bruto >= 2000)
		{	
			taxa_irs = 0.25;
		}
		else if ((salario_bruto >= 1000) && (salario_bruto < 2000))
		{
			taxa_irs = 0.20;
		}
		else
		{
			taxa_irs = 0.175;
		}
	}
		
	float calcIRS(){
		
		return (salario_bruto * taxa_irs);
	}
	
	float calcSS(){
		
		return (salario_bruto * TAXA_SS);
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
	
	cout << endl << "Digite o Numero: ";
	cin >> emp1.num;
	
	cout << endl << "Digite o Salario Bruto do empregado Numero " << emp1.num << ": ";
	cin >> emp1.salario_bruto;

	emp1.calc_taxa_irs();

	cout << endl << endl;
	cout << "Dados salariais do Empregado Numero " << emp1.num << endl;
	
	cout << endl << "Salario Bruto = "	<< emp1.salario_bruto << endl;
	
	cout << "Taxa de IRS = " << emp1.taxa_irs << endl;

	cout << "Taxa de SS = " << TAXA_SS << endl;
	
	cout << "Salario Liquido = " << emp1.calc_salario_liquido() << endl;

	cout << endl;

	cout << endl << "Digite uma tecla para sair" << endl;
	
	fflush(stdin);
	getchar();
	return 0;
}

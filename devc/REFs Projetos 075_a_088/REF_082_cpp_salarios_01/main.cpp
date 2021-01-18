#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;


// Programa REF_082_cpp_salarios_01

/* 	
	Escreva um programa, orientado para objetos e para cálculos simples 
   	de salários, constituído por uma classe (nome à sua escolha), com os 
	seguintes members:
	
	Data (atributos ou propriedades):
	
		long num
		float salario_bruto
		float salario_liquido
		float taxa_irs
		
	Methods (funções):
	
		calc_salario_liquido()
		
	O programa deve calcular o salário líquido de dois objetos
	do tipo empregado.
	
	O salário líquido é o salário bruto - a soma dos descontos
	
	Neste exemplo simples, o desconto é somente para o IRS
*/

class Empregado
{
public:

	long num;
	float salario_bruto;
	float salario_liquido;
	float taxa_irs;
	
	void calc_salario_liquido()
	{
		salario_liquido = salario_bruto - (salario_bruto * taxa_irs);
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

	emp1.calc_salario_liquido(); // Cálculo do salario objeto emp1

	cout << endl;
	cout << "Dados salariais do Empregado Numero " << emp1.num << endl;
	cout << endl << "Salario Bruto = "		 
		 << emp1.salario_bruto << endl;
	
	cout << endl << "Taxa de IRS = "
		 << emp1.taxa_irs << endl;

	cout << endl << "Salario Liquido = "
		 << emp1.salario_liquido << endl;

	cout << endl << "Digite uma tecla para sair" << endl << endl;
	fflush(stdin);
	getchar();
	return 0;
}


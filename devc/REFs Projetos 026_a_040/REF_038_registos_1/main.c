#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Programa REF_038_registos_1

// Estruturas s�o t�cnicas de programa��o que permitem 
// o armazenamento agrupado de v�rios tipos de dados.

// O seguinte exemplo mostra como utilizar structs
// (registos) 
//
// calcula a m�dia de dois salarios
//

int main()
{
  	setlocale(LC_ALL, "Portuguese");

	struct empregado // declara struct do tipo empregado
	{
		long num;
		char nome[30];
		float salario;
	}emp1, emp2; // as vars da struct para podermos aced�-la
 
/*
	As linhas de c�digo acima podem ser redeclaradas 
	da seguinte maneira:

	struct empregado
	{
		long num;
		char nome[30];
		float salario;
	};
	struct empregado emp1, emp2;
*/
	double media;
	
	printf("\n\nInsira n�mero de emp1: ");
	fflush(stdin);
//	fpurge(stdin); para Macs
	scanf("%ld", &emp1.num);

	printf("\n\nInsira Nome de emp1: ");
	fflush(stdin);
	gets(emp1.nome);

	printf("\nInsira sal�rio de emp1: ");
	fflush(stdin);
	scanf("%f", &emp1.salario);

	printf("\n\nInsira n�mero de emp2: ");
	fflush(stdin);
	scanf("%ld", &emp2.num);

	printf("\nInsira Nome de emp2: ");
	fflush(stdin);
	gets(emp2.nome);

	printf("\nInsira sal�rio de emp2: ");
	fflush(stdin);
	scanf("%f", &emp2.salario);
	
	printf("\n\nDados Introduzidos: \n\n");

	printf("Num de emp1: %ld", emp1.num);
	printf("\nNome de emp1: %s", emp1.nome);
	printf("\nSal�rio de emp1: %4.2f", emp1.salario);

	printf("\n\n\n");
	printf("Num de emp2: %ld", emp2.num);
	printf("\nNome de emp2: %s", emp2.nome);
	printf("\nSal�rio de emp2: %4.2f", emp2.salario);

// c�lculo da m�dia dos sal�rios

	media = (emp1.salario  + emp2.salario)/2;

	printf("\n\nA M�dia dos sal�rios = %4.2f", media);

	printf("\n\n");
	system("pause");
}


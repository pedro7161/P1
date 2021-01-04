#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Programa REF_043_registos_3

// Programa que aplica ptrs a um registo para
// aced�-lo indirectamente
//
 
int main()
{
	setlocale(LC_ALL, "Portuguese");
	struct empregado
	{
		long num;
		char nome[30];
		float salario;
	};

// emp � uma var-estrutura do tipo empregado

	struct empregado emp;

// p � um ptr para estruturas do tipo emprehado

	struct empregado *p;

// ptr p recebe o endere�o da var da struct

	p = &emp;

	printf(" \nInsira o numero do emp: ");
	fflush(stdin);
	scanf("%ld", &p->num); // acesso indirecto ao campo num da struct

	printf("\nInsira o nome do emp: "); 
	fflush(stdin);
	gets(p->nome);

	printf("\nInsira o salario do emp: ");
	fflush(stdin);
	scanf("%f", &p->salario);

	printf("\n\nDados introduzidos:");
	printf("\n\nNum de emp: %ld", p->num);
	printf("\nNome de emp: %s", p->nome);
	printf("\nsalario de emp: %4.2f", p->salario);

	printf("\n\n\n");
	system("pause");

	return 0;
}







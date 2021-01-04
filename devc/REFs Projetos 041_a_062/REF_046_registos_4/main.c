#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
// Programa REF_046_registos_4

// Diferente t�cnica de apontamento de ponteiros para os 
// campos dos registos.
//
// Em vez da conjuga��o "->" pode-se utilizar "(*p)."
// 
// Todavia, a vers�o "->" � mais popular
//
// Na vers�o "(*p)." os par�nteses s�o obrigat�rios
// Caso contr�rio o valor seria armazenado no endere�o, 
// por exemplo, de p.idade, o que seria completamente 
// inv�lido.
// 
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

	struct empregado emp;

	struct empregado *p;

	p = &emp;

	printf(" \nInsira o numero do emp: ");
	fflush(stdin);
	scanf("%ld", &(*p).num); // acesso indirecto ao campo num da struct

	printf("\nInsira o nome do emp: "); 
	fflush(stdin);
	gets((*p).nome);

	printf("\nInsira o salario do emp: ");
	fflush(stdin);
	scanf("%f", &(*p).salario);

	printf("\n\nDados introduzidos:");
	printf("\n\nNum de emp: %ld", (*p).num);
	printf("\nNome de emp: %s", (*p).nome);
	printf("\nsalario de emp: %4.2f", (*p).salario);

	printf("\n\n\n");
	system("pause");

	return 0;
}



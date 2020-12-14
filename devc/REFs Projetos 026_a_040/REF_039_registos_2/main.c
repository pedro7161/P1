#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Programa REF_039_registos_2
//
// Array de structs 
//
// calcula a m�dia de tr�s sal�rios do array
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

	struct empregado emps[3];
	int i;

	float soma, media;
	
	for (i=0; i < 3; i++)
	{
		printf("\n\nInsira n�mero do empregado %d: ", i + 1);
		fflush(stdin);
		scanf("%ld", &emps[i].num);

		printf("\nInsira nome do empregado %d: ", i + 1);
		fflush(stdin);
		gets(emps[i].nome);

		printf("\nInsira Sal�rio do empregado %d: ", i + 1);
		fflush(stdin);
		scanf("%f", &emps[i].salario);
	}
	
	printf("\n\nOs dados que foram Introduzidos:");

	for (i=0; i < 3; i++)
	{
		printf("\n\nN�mero do empregado = %ld", emps[i].num);
		printf("\nNome %s: ", emps[i].nome);
		printf("\nSal�rio %4.2f: ", emps[i].salario);
	}
	
// c�lculo da m�dia dos sal�rios

	for (i=0, soma = 0; i < 3; i++)
	{
		soma = soma + emps[i].salario;
	}

	media = soma / 3;

	printf("\n\n\nA M�dia dos sal�rios = %4.2f", media);

	printf("\n\n");
	system("pause");

	return 0;
}


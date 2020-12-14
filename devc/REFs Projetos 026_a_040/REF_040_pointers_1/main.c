#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Programa REF_040_pointers_1

	Apontadores

	Um pointer � uma var que guarda o endere�o de 
	outra var, permitindo assim o acesso a esta de 
	uma forma indirecta.

	Declara��o de um pointer:

	tipo_de_dados_da_var_que_aponta_para  *nome_ponteiro;

	Exemplo:

	float *p1;

	No exemplo acima, significa que p1 � um ponteiro que aponta para
	uma var do tipo float. Ou seja, p1 guarda o endere�o de uma var 
	do tipo float e pode assim aced�-la indirectamente.

	Particularidades dos ponteiros:

	&	antes de uma var (pr�fixo) refere-se ao pr�prio endere�o 
		dessa var.
	*	antes de ponteiro, mas fora da sua declara��o, refere-se a
		um acesso indirecto (o ponteiro acede ao conte�do da var que 
		est� a apontar para).

	Exemplo:

	int x;		---- declara x como var do tipo int
	x = 10;		---- atribui��o do valor 10 � var x

	int *P;		---- p � um ptr que aponta para uma var int

	p = &x;     ---- p guarda o endere�o de x (p aponta para x)

	printf("\n %d", *p); ---- mostra no ecr� o valor de x (10)
*/
 
int main()
{
	setlocale(LC_ALL, "Portuguese");

	int a; // declara var a

	int *p;// declara um ptr para inteiros

	p = &a;	// p guarda endere�o da var a

	printf("\n\nDigite um valor inteiro: ");
	fflush(stdin);
	scanf("%d", &a);

	printf("\n\nValor da var a directamente: %d", a);
		
	printf("\n\nValor da var a indirectamente: %d", *p);
	
	*p = 20; // altera indirectamente valor de a

	printf("\n\nNovo valor da var a apos ser alterado indirectamente: %d", *p);

	// ver os endere�os

	printf("\n\nEndere�o da var a: %ld", (unsigned long) &a);
	printf("\n\nConte�do de p = endere�o da var a: %ld", (unsigned long) p);
	printf("\n\nEndere�o do pointer p: %ld", (unsigned long) &p);

	printf("\n\n");
	system("pause");

	return 0;
}

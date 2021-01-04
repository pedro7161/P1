#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
  
// Programa REF_042_pointers3_ptr_to_ptr_1

// Pointers to Pointers
//
// Ponteiros que apontam para ponteiros
//
// S�o vars-ponteiros que guardam endere�os de outras vars-ponteiros
// que, por sua vez, guardam endere�os de vars finais, permitindo assim 
// a estas um acesso de dupla indirec��o. 
// 
// Particularidades:
//
// ** significa dupla indirec��o/ponteiro para ponteiro
//

// Exemplo

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int val;
	int *p1;  // ponteiro indirec��o simples(single ptr)
	int **p2; // ponteiro indirec��o dupla (double ptr)
	
	val = 5;

	p1 = &val;
	p2 = &p1;

	printf("\n End da var val = %ld", &val);
	printf("\n End do ptr p1 = %ld",  &p1);
	printf("\n End do ptr p2 = %ld",  &p2);
	printf("\n Valor do ptr p1 = %ld", p1);
	printf("\n Valor do ptr p2 = %ld", p2);

	printf("\n Acesso directo a var val: %d", val);
	printf("\n Acesso indirecto simples a var val: %d", *p1);
	printf("\n Acesso indirecto duplo a var val: %d", **p2);

	**p2 = 30;
	
	printf("\n Acesso directo a var val: %d" , val);
	printf("\n Acesso indirecto simples a var val: %d", *p1);
	printf("\n Acesso indirecto duplo a var val: %d", **p2);

	printf("\n\n");
	system("pause");

	return 0;
}


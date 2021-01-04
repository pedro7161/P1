
#include <stdio.h>
#include <stdlib.h>

// Programa REF_052_ptr_to_ptr_2

// Mesmo que o programa pointer to pointer 1, mas com maior clareza na impress�o
// de resultados

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
	int val;
	int *p1;  // ponteiro indirec��o simples(single ptr)
	int **p2; // ponteiro indirec��o dupla (double ptr)
	
	val = 5;

	p1 = &val;
	p2 = &p1;


	printf("\n End da var val = %ld", &val);
	printf("\n End do ptr p1 = %ld", &p1);
	printf("\n End do ptr p2 = %ld", &p2);
	printf("\n Valor do ptr p1 = %ld", p1);
	printf("\n Valor do ptr p2 = %ld", p2);


	printf("\n Acesso directo a var val: %d", val);
	printf("\n Acesso indirecto simples a var val: %d", *p1);
	printf("\n Acesso indirecto duplo a var val: %d", **p2);

	printf("\n\n\nResumindo a primeira parte: \n\n");
	printf("&val       &p1        &p2         p1         p2      val   *p1  **p2\n\n");

	printf("%ld", &val);
	printf("    %ld", &p1);
	printf("    %ld", &p2);
	printf("    %ld", p1);
	printf("    %ld", p2);
	printf("    %d", val);
	printf("    %d", *p1);
	printf("    %d", **p2);
	
// alterando val ap�s double indirection
	**p2 = 30;

	printf("\n\n\n\n Apos alteracao da var val atraves de indirecao dupla: ");
	printf("\n\n Acesso directo a var val: %d" , val);
	printf("\n Acesso indirecto simples a var val: %d", *p1);
	printf("\n Acesso indirecto duplo a var val: %d", **p2);

	printf("\n\n\n");
	system("pause");

	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
    
// Programa REF_047_ptrs_args_formais_strings
//
// Aplica��o de pointers como par�metros formais de strings 

void mostra_str(char *p)
{
	printf("\n\n Os valores do array na funcao: \n\n");

	while (*p)
	{
		printf("\n %c",  *p++);
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	char m[30];

	printf("\nDigite uma string:\n\n");
	
	fflush(stdin);
	gets(m);
	
	mostra_str(m);

	printf("\n\n\n");
	system("pause");

	return 0;
}

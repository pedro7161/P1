#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // para reconhecer acentuação

// Programa REF_007_ifs_1

// Primeiro exemplo da estrutura if

int main()
{
	setlocale(LC_ALL, "Portuguese"); // definição da Língua-acentuação
	
// Exemplo:
// Leia um inteiro digitado e diga se é ou não maior do que 0	
	
	int val;

	printf("\n\nDigite um valor inteiro: ");
	fflush(stdin);
	scanf("%d", &val);
	
	if (val > 0)
	{
		printf("\n\tOvalor %d é maior do que 0", val);
	}
	else
	{
		printf("\n\tOvalor %d não é maior do que 0", val);		
	}
	
	printf("\n\n");
	system("PAUSE");
		
	return 0;
}




#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
// Programa REF_051_array_ptrs_para_chars

// Um array de ptrs para dados do tipo char-string
// guarda os enderecos das strings
// cada elemento do array de ptrs � assim um endereco 
// de uma string
//

int main()
{
	setlocale(LC_ALL, "Portuguese");

	char *p[] =
	{
		"Maria Rita",	// p[0] guarda o endereco desta string
		"Matos Silva",	// p[1] guarda o endereco desta string
		"Rita Lee"	// p[2] guarda o endereco desta string
	};

    	int i;
	// cada posicao do ptr ocupa 4 bytes, o tamanho de um endereco!
	int numstrs = sizeof (p) / sizeof (p[0]);
    
    printf("\n\nsizeof de p = %d", sizeof(p));
    printf("\n\nsizeof de p[0] = %d", sizeof(p[0]));
    
	printf("\n\nNum de strings no Array de ptrs = %d\n\n", numstrs);
	for (i=0; i < numstrs; i++)
	{
		printf(" %ld", p[i]);		
        printf(" %s\n\n", p[i]);		
	}

	printf("\n\n\n");
	system("pause");

	return 0;
}


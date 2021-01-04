#include <stdio.h>
#include <stdlib.h>

// Programa REF_053_funcs_tipo_ptr_1

// fun��o que retorna o endere�o (um pointer) de um char

char * altera( char m[] )
{
    int i = 0;

	while(m[i])
	{	
		if (m[i] == ' ')

			m[i] = '#'; 

		i++;
	}

    return(&m[0]); // retorna o endereco da primeira posicao da string m  
}

int main()
{
	char msg[30];

    	char *p;

	printf("\n\nDigite um texto curto:\n\n ");
	fflush(stdin);
	gets(msg);
	printf("\n\nEis a string digitada:\n\n %s", msg);

	p = altera( msg );

	printf("\n\nEis a string alterada:\n\n %s", p);
	
	printf("\n\n");	
	system("pause");
	
	return 0;
} 


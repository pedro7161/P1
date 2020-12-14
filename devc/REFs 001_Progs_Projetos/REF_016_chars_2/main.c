#include <stdio.h>
#include <stdlib.h>


// Programa REF_016_chars_2

/*
  Este programa l� uma string digitada e muda todos os seus
  espa�os para o caracter #, afetando assim a mem�ria da 
  string
*/

int main()
{
	char m[30];
	int i;

	printf("\nDigite uma string:\n\n");
	fflush(stdin);
	gets(m);

	i = 0;
	while (m[i] != '\0')
	{
		if(m[i] == ' ')
		{
			m[i] = '#';	
		}
		
		i++;
	}

	printf("\n\nEis a nova string: \n\n %s", m);

	printf("\n\n");
	system("pause"); // requer a biblioteca stdlib.h
	return 0;
}


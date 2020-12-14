#include <stdio.h>
#include <stdlib.h>

// Programa REF_032_funcs_3

// Este programa rev� as strings e usa funcs como strings 
// como argumentos.

// Uma string � uma cadeia de carateres terminados pelo
// carater especial '\0' (inserido automaticamente no
// fim da string).

// A string � assim um array ou vector de carateres, no
// qual cada elemnto � acedido atrav�s do nome da string
// e de um �ndice de posi��o.
//
// As strings quando inicializadas devem estar delineadas
// por aspas, exemplo
//
// char msg[] = "o rio tejo"
//
// Aten��o que os carateres individais de uma str devem 
// ser referenciados por plicas, exemplo, 'a'


// Fun��o conta e devolve a quantidade de espa�os 
// contidos numa string
int conta_espacos(char str1[])
{
	int i; // �ndice geral
	int k; // contador de espa�os

	i = 0;
	k = 0;
	while(str1[i] != '\0')
	{
		if (str1[i] == ' ')
		{
			k++;
		}
	
		i++;
	}

	return k;
} // fecha conta_espacos

// Esta fun��o conta e devolve a quantidade de letras 
// maiusculas numa string
int conta_maiusculas(char texto[])
{
	int i;
	int k; // ctdr de letras maiusculas

	i = 0;
	k = 0;
	while (texto[i] != '\0')
	{
		if (texto[i] >= 'A' && texto[i] <= 'Z')
		{
			k++;
		}
		i++;
	}

	return k;	
}


// Esta fun��o inverte e imprime uma string
void inverte_e_imprime_str(char str[])
{
	int i; 

	printf("\n\n\n\nEis a nova string a inverter: %s\n\n" , str);

// percorrer a string at� ao fim
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

// aqui, na string estamos posicionados no carater '\0'

	i--;  // recua da '\0' para o �ltimo carater v�lido da string

// neste momento a var i est� posicionada no fim da string (antes da '\0')
	printf("\nEis a string invertida: \n\n");
	while (i >= 0)
	{
		printf("%c", str[i]);
		i--; // recua para carater anterior
	}
}

// Experimentos com fun��es e strings
int main()
{
	char info[40];
	int num_espacos;

	printf("\n\nDigite uma string:\n\n");
	fflush(stdin);
	gets(info);

// chamar uma fun��o para contar o n�mero de espa�os
	num_espacos = conta_espacos(info);
	printf("\n\nA string contem %d espacos", num_espacos);

// chamar uma fun��o para contar o numero de letras maiusculas
	printf("\n\nA string contem %d letras maiusculas", conta_maiusculas(info));

// chamar uma func para inverter e imprimir uma string
// neste caso, vamos passar uma string sem uso de uma var
	
	inverte_e_imprime_str("o rio tejo");

	printf("\n\nDigite uma tecla para continuar");
	fflush(stdin);
	getchar();

	return 0;
}


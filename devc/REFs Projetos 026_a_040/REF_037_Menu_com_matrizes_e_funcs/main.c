#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // para usar acentua��o

#define N_LINS 3 //Num de linhas
#define N_COLS 4 //Num de colunas

// Programa REF_037_Menu_com_matrizes_e_funcs

// Matrizes-Menu-Fun��es

float calcsoma(float mat[N_LINS][N_COLS])
{
	float x = 0;
	int i, j;
	for (i = 0; i < N_LINS; i++)
	{
		for (j = 0; j < N_COLS; j++)
		{
			x = x + mat[i][j];
		}
	}
	return x;
}
float calcmedia(float mat[N_LINS][N_COLS])
{
	int i, j;
	float soma, media;
	soma = 0;
	media = 0;

	for (i = 0; i < N_LINS; i++)
	{
		for (j = 0; j < N_COLS; j++)
		{
			soma = soma + mat[i][j];
		}
	}
	
	media = soma / (N_LINS * N_COLS);
	return media;
}

float calcmax(float mat[N_LINS][N_COLS])
{
	float valmax;
	valmax = mat[0][0];
	int i, j;
	for (i = 0; i < N_LINS; i++)
	{
		for (j = 0; j < N_COLS; j++)
		{
			if (valmax < mat[i][j])
				valmax = mat[i][j];
		}
	}
	return valmax;
}
float calcmin(float mat[N_LINS][N_COLS])
{
	float valmin;
	valmin = mat[0][0];
	int i, j;
	for (i = 0; i < N_LINS; i++)
	{
		for (j = 0; j<N_COLS; j++)
		{
			if (valmin > mat[i][j])
				valmin = mat[i][j];
		}
	}
	return valmin;
}
float calcver(float mat[N_LINS][N_COLS])
{
	float ver = 0;
	ver = ver + mat[0][0] + mat[0][N_COLS - 1];
	ver = ver + mat[N_LINS-1][0] + mat[N_LINS-1][N_COLS - 1];
	return ver;
}

int main()
{
	setlocale(LC_ALL, "Portuguese"); // defini��o da L�ngua-acentua��o


	float mat[N_LINS][N_COLS];
	int j, i, num; //percorrer colunas e linhas

	//Carregar array bi mat
	for (i = 0; i < N_LINS; i++)
	{
		for (j = 0; j<N_COLS; j++)
		{
			printf("\n Digite valor da linha e coluna %d,%d: ", i, j);
			fflush(stdin);
			scanf("%f", &mat[i][j]);
		}
	}
	//ver matriz
	printf("\n\nEis a matriz digitada:\n\n");
	for (i = 0; i < N_LINS; i++)
	{
		for (j = 0; j<N_COLS; j++)
		{
			printf("%4.2f ", mat[i][j]);
		}
		printf("\n\n");
	}
	
	printf("\n\nCalculos_Matriz: \n\n");
	printf("\nEscolha um n�mero de 1 a 5, para sair digite uma letra:\n");
	printf("\n\n1 - Soma Matriz");
	printf("\n\n2 - M�dia Matriz");
	printf("\n\n3 - M�ximo Matriz");
	printf("\n\n4 - M�nimo Matriz");
	printf("\n\n5 - Soma V�rtices Matriz");
	printf("\n\n");

	while (scanf("%d", &num) == 1)
	{
		switch (num)
		{
		case 1: printf("\nSoma = %4.2f\n\n", calcsoma(mat));
			system("pause");
			break;
		case 2: printf("\nM�dia = %4.2f\n\n", calcmedia(mat));
			system("pause");
			break;
		case 3: printf("\nValor m�ximo = %4.2f\n\n", calcmax

(mat));
			system("pause");
			break;
		case 4: printf("\nValor m�nimo = %4.2f\n\n", calcmin

(mat));
			system("pause");
			break;

		case 5: printf("\nOs v�rtices s�o = %4.2f\n\n",calcver

(mat));
			system("pause");
			break;
		default: printf("\n Digitou um n�mero que nao pertence ao menu\n\n");
				 system("pause");
		}

		system("cls");
		printf("\n\nCalculos_Matriz: \n\n");
		printf("\nEscolha um n�mero de 1 a 5, para sair digite uma letra:\n");
		printf("\n\n1 - Soma Matriz");
		printf("\n\n2 - M�dia Matriz");
		printf("\n\n3 - M�ximo Matriz");
		printf("\n\n4 - M�nimo Matriz");
		printf("\n\n5 - Soma V�rtices Matriz");
		printf("\n\n");
	}
	printf("\n\n");
	system("pause");
	
	return 0;
} //fecha main




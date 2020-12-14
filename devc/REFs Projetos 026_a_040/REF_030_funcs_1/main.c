#include <stdio.h>
#include <stdlib.h>

// Programa REF_030_funcs_1

/*
Fun��es
 
Uma fun��o � um subprograma, devidamente nomeado, que 
permite executar um conjunto de instru��es, agrupado 
em um bloco, delineado por {}, ap�s uma chamada ou 
invoca��o, atrav�s do seu nome, a partir de uma outra 
parte do programa (programa principal, programa chamente 
ou fun��o chamante).

As fun��es permitem assim executar, em v�rias partes
do programa, uma s�rie de instru��es, resultando num 
programa de tamanho mais reduzido simples, organizado, 
otimizado e eficiente. 
  
Por outro lado, uma fun��o pode invocar-se a si mesma, 
sendo ent�o conhecida por fun��o recursiva.
 

Porque usar fun��es ?

Para permitir o reaproveitamento de c�digo j� constru�do.

Para evitar que um parte de c�digo que seja repetida 
v�rias vezes dentro de um mesmo programa.

Para permitir a altera��o de uma parte de c�digo de uma 
forma mais r�pida. Com o uso de uma fun��o � preciso 
alterar apenas dentro da fun��o que se deseja.

Para que os blocos do programa n�o fiquem grandes demais e, 
por conseq��ncia, mais dif�ceis de entender.

Para facilitar a leitura do programa-fonte de uma forma 
mais f�cil.

Para separar o programa em partes(blocos) que possam ser 
logicamente compreendidos de forma isolada.



A declara��o de uma fun��o

Antes de ser utilizada, uma fun��o deve ser definida pois, 
para cham�-la no corpo do programa, � preciso que o 
compilador a conhe�a, ou seja, que ele conhe�a o seu nome, 
seus argumentos e as instru��es que ela cont�m. 

A defini��o de uma fun��o � chamada de "declara��o". 

A declara��o de uma fun��o � feita usando a seguinte sintaxe: 

tipo_de_dado Nome_Da_fun��o(tipo1 argumento1, tipo2 argumento2, ...)
{ 
	lista de instru��es
}

Observa��es:

Tipo_de_dado representa o tipo de valor que a fun��o deve 
retornar (char, float, int ...)

Se a fun��o n�o retorna nenhum valor, ent�o coloca-se a 
palavra-chave void antes dela.

O nome da fun��o segue as mesmas regras que os nomes dos 
identificadores (vari�veis, constantes, etc.).

Os argumentos s�o facultativos, mas se n�o houver argumentos, 
os par�nteses devem continuar presentes.


Chamada da fun��o

Para executar uma fun��o, basta cham�-la escrendo o seu nome 
(sempre respeitando o case sensitive), seguido de um par�ntese 
aberto (eventualmente argumentos) e, em seguida, um par�ntese 
fechado: 

Nome_Da_Fun��o();

Observa��es:

Se foram definidos argumentos na declara��o da fun��o, ent�o 
dever�o ser separados por v�rgulas!).

Nome_Da_fun��o (argumento1, argumento2);
 


Prot�tipo de uma fun��o

O prot�tipo de uma fun��o � a descri��o de uma fun��o que � 
implementada em outra parte do programa.

Assim, o prot�tipo � colocado no in�cio do programa (antes 
da fun��o principal main()). 

Esta descri��o permite que o compilador "verifique" a 
validade da fun��o cada vez que ele a encontra no programa, 
indicando-lhe:

O tipo de valor retornado pela fun��o
O nome da fun��o
Os tipos de argumentos


Ao contr�rio da defini��o da fun��o, o prot�tipo n�o � seguido 
pelo corpo da fun��o (com instru��es a serem executadas), e n�o
inclui o nome dos par�metros (apenas seu tipo). 

Um prot�tipo da fun��o tem esta apar�ncia: 

Tipo_de_dado_retornado Nome_Da_Fun��o(tipo_argumento1, tipo_argumento2, ...);

O prot�tipo � uma instru��o, ent�o, ele � acompanhado de um ponto e virgula!


Vejamos alguns exemplos de prot�tipos: 

void Exibir_car(char, int);

int Somme(int, int);

Os argumentos de uma fun��o

� poss�vel passar argumentos para uma fun��o, isto �, dar 
um valor ou um nome a uma vari�vel para que a fun��o possa 
executar opera��es sobre esses argumentos, ou gra�as a eles. 

Passar argumentos para uma fun��o faz-se atrav�s de uma lista 
de argumentos (separados por v�rgulas) entre par�nteses, 
imediatamente ap�s o nome da fun��o. 

O n�mero e tipo dos argumentos na declara��o, o prot�tipo e 
a chamada devem corresponder, se n�o, pode ocorrer um erro 
durante a compila��o... 


Um argumento pode ser:

uma constante
uma vari�vel
uma express�o
uma outra fun��o

Retorno de um valor por uma fun��o

A fun��o pode retornar um valor (e, ent�o, terminar) gra�as 
� palavra-chave return.
Quando a instru��o return � encontrada, a fun��o avalia o 
valor que a segue e, em seguida, o retorna para o programa 
de chamada (um programa a partir do qual a fun��o foi chamada). 

Uma fun��o pode conter m�ltiplas instru��es return, no entanto, 
ser� a primeira instru��o return encontrada que provocar� o fim 
da fun��o e o retorno do valor que a segue. 

A sintaxe da instru��o "return" � simples: 

return (valor_ou_vari�vel);


O tipo de valor retornado deve corresponder ao que foi 
especificado na defini��o (e o prot�tipo).

*/


// Fun��o para nos desejar as Boas vindas.
void boas_vindas()
{
	printf("\n\nViva a todos\n\n");

} // fecha boas_vindas
 
// Fun��o para somar e devolver a soma de dois inteiros
int calc1(int num1, int num2)
{
	int soma;

	soma = num1 + num2;

	return  soma;

} // fecha calc1

// Fun��o para calcular e devolver a m�dia 
// de dois inteiros (aten��o m�dia � float)
float calc2(int a, int b)
{
	float m;

	m = ((float)a + (float)b) / 2;

	return m;

} // fecha calc2

// Fun��o para imprimir um carater n vezes 
void escreve(int n, char ch)
{
	int i;

	i = 0;
	while (i < n)
	{
	  printf ("%c", ch);

	  i++;
	}
} // fecha escreve


// Experimentos com fun��es
// 1 - Cria uma func para nos desejar as Boas vindas.
// 2 - Cria uma func para somar dois inteiros e devolver 
//	   o resultado ao programa chamante.
// 3 - Cria uma func para calcular e devolver a m�dia de 
//     dois inteiros    
// 4 - Cria uma func para imprimir um carater n vezes 
//     para delinear resultados no ecr�.

int main()
{
// Declara��o das vars
	int x, y, resultado;
	float media;

// chama uma func de Boas Vindas
	escreve(40, '-'); // imprime carater '-' 40 vezes
	boas_vindas();
	escreve(40, '-');


// chama uma func para somar dois inteiros e 
// devolver o resultado ao programa chamante.

// ler os valores digitados
	printf("\n\n\nDigite um inteiro: ");
	fflush(stdin);
	scanf("%d", &x);

	printf("\n\nDigite o outro inteiro: ");
	fflush(stdin);
	scanf("%d", &y);

	printf("\n\n\n");
	escreve(40, '*');
	resultado = calc1(x, y); // args actuais
	printf("\n\nA soma de %d com %d = %d", x, y, resultado);
	// printf("\n\nA soma de %d com %d = %d", x, y, calc1(x, y) );
	printf("\n\n");
	escreve(40, '*');
	
// chama um fun��o para calcular e devolver a 
// m�dia de dois inteiros (aten��o m�dia � float)
	
	printf("\n\n\n\n");
	escreve(40, '#');
	media = calc2(x, y);
	printf("\n\nA media de %d com %d = %4.2f", x, y, media);
	printf("\n\n");
	escreve(40, '#');

	printf("\n\n");
	system("pause");

	return 0;	
}



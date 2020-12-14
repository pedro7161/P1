#include <stdio.h>
#include <conio.h>
#include <math.h>

// Programa REF_025_math_1

/* Utiliza��o da biblioteca math

	A biblioteca math fornece um conjunto de fun��es para opera��es matem�ticas, 

	tais como trigonom�tricas, hiperb�licas, logar�tmicas, pot�ncia��o e de 

	arredondamentos.

	Todas as fun��es da biblioteca math.h retornam um valor do tipo double.

	A tabela e o programa ambos abaixo apresentam um resumo de algumas das 

	fun��es mais utilizadas:


	sqrt( )		Calcula raiz quadrada

	pow(base, exp) 	Potencia��o (base, expoente)

	floor( ) 	Valor inteiro mais pr�ximo para baixo

	ceil( ) 	Valor inteiro mais pr�ximo para cima

	sin( ) 		Seno

	cos( ) 		Cosseno

	tan( ) 		Tangente

	log( ) 		Logaritmo natural

	log10( ) 	Logaritmo base 10

	M_PI		Valor de PI (3,14159265358979323846)
*/

int main (void)
{
  double x = 8.75;
 
  double inteiro_pbaixo = 0.0;
  double inteiro_pcima = 0.0;
  double raiz_quadrada = 0.0;
  double potencia = 0;
 
  double seno = 0;
  double cosseno = 0;
  double tangente = 0;
 
  double logaritmo_natural = 0;
  double logaritmo_xbase10 = 0;
 
  printf("\n********* Utilizando a biblioteca math.h ***********\n\n");
 
  printf("\nFuncoes de obtencao valor inteiro mais proximo para baixo e para cima\n\n");
  printf("Valor original de x = %f\n",x);
 
  inteiro_pbaixo = floor(x);
  printf("Valor aproximado inteiro para baixo %f \n", inteiro_pbaixo );
 
  inteiro_pcima = ceil(x);
  printf("Valor aproximado inteiro para cima %f \n", inteiro_pcima);
 
  printf("\n----------------------------------------------------\n\n");
 
  printf("\nFuncoes de raiz e potenciacao \n\n");
  printf("Valor original de x = %lf\n",x);
  raiz_quadrada = sqrt(x);
  printf("Valor da raiz quadrada %f \n",raiz_quadrada);
 
  x = ceil(x); // o valor de x para cima, x passa a valer 10
 
  potencia = pow(x,2); //elevando o valor de x ao quadrado
  printf("Valor de %.2lf ao quadrado %.2f \n",x,potencia);
 
  printf("\n----------------------------------------------------\n\n");
 
  printf("\nFuncoes trigonometricas\n\n");
 
  x = 0; //atribuindo zero em x para fazer os c�lculos trigonom�tricos
 
  seno = sin(x);
  printf("Valor de  seno de %.2f = %.2f \n",x,seno);
 
  cosseno = cos(x);
  printf("Valor de  cosseno de %.2f = %.2f \n",x,cosseno);
 
  tangente = tan(x);
  printf("Valor de  tangente de %.2f = %.2f \n\n",x,tangente);
 
  printf("\n----------------------------------------------------\n\n");
 
  printf("\nFuncoes logaritmicas\n\n");
 
  x = 2.718282;
  logaritmo_natural = log(x);
  printf("Logaritmo natural de x %.2f = %.2f \n",x,logaritmo_natural);
 
  x = 10;
  logaritmo_xbase10 = log10(x);
  printf("Logaritmo de x na base 10 %.2f = %.2f \n",x,logaritmo_xbase10);
  
  printf("\n----------------------------------------------------\n\n");
 
  printf("\nValor de PI %4.12f\n\n", M_PI);

  printf("\n\n");
  system("PAUSE");	
  return(0);
}

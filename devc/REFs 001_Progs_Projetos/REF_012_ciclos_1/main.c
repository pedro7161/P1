#include <stdio.h>
#include <stdlib.h>

// Programa REF_012_ciclos_1
 
/*
  Antevis�o dos ciclos
  
  Um ciclo � um processo que se repete
  um determinado n�mero de vezes.
  
  Requer um contador a fim de controlar 
  o numero de vezes que se repete.
   
*/

int main()
{
  // ciclo para nos dar cinco boas vindas
  // usando um contador de incremento
  
  int i;
  i = 0;
  
  while( i < 5 )
  {
        printf("\nCiclo %d Viva", i);
        
        i = i + 1; 
  }
  
  // Repetir os cinco Vivas mas usando um 
  // contador de decremento
  
  printf("\n\n\n");
  i = 5;
  while( i > 0 )
  {
        printf("\nCiclo %d Viva", i);
        
        i = i - 1; // i--
  }
  
   
  printf("\n\n");
  system("PAUSE");
	
  return 0;
}




#include <stdio.h>
#include <stdlib.h>

// Programa REF_061_pesquisa_binaria_1

// Pesquisa de um valor-chave num array previamente ordenado
// A fun��o devolve o valor-chave se encontrado no array
// Caso contr�rio devolve -1

int PesquisaBinaria ( int array[], int chave , int num_els)
{
     int inf = 0; //limite inferior 
 
     int sup = num_els - 1; //limite superior 
     int meio;

     while (inf <= sup) 
     {
	       meio = inf + (sup - inf)/2;

           if (chave == array[meio])  
           {	     
		      return meio;
           }

           else if (chave < array[meio])
	       {
               sup = meio - 1;
           }
          else
	   {
             inf = meio + 1;
           }
        }

     return -1;   // n�o encontrado
}


int main(int argc, char *argv[])
{
  int vals[] = {10, 20, 30, 40, 50, 60, 70, 80};
  
  int x = 30;
  
  int y = 25;
  
  if (PesquisaBinaria(vals, x, 8) == -1)
  
     printf("\n\n O valor %d nao existe no array\n\n ", x);
  
  else
  
      printf("\n\n O valor %d existe no array\n\n", x);
    
  
  if (PesquisaBinaria(vals, y, 8) == -1)
  
     printf("\n\n O valor %d nao existe no array\n\n ", y);
  
  else
   
      printf("\n\n O valor %d existe no array\n\n", y);
  
  
  printf("\n\n\n\n");
  system("PAUSE");
	
  return 0;
}


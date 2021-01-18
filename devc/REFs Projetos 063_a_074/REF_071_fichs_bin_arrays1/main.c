#include <stdio.h>
#include <conio.h> // requerido para system("cls")
#include <stdlib.h> // requerido para a fun��o exit() 
  
// Programa Ref_071_fichs_bin_arrays1

// Ficheiros Bin�rios
// Carregamento de um array num ficheiro bin�rio
// Fun��es fwrite() e fread()

// Este programa armazena num ficheiro bin�rio cinco 
// dados inteiros que foram digitados para um array
// chamado nums1.

// Finalmente, l� os cinco valores a partir do ficheiro,
// carregando-os num outro array chamado nums2 e 
// mostra-os no ecr�.

 int main( )
 {
  FILE *fp; 
  
  int i, n;
  char ch;
  
  int nums1[5];
  int nums2[5];
   
  
// Carregamento do array

  printf("\n\nCarregamento de cinco inteiros no Array nums1\n\n");
  for (i = 0; i < 5; i++)
  {
      printf("\n Digite o valor inteiro %d: ", i);
      fflush(stdin);
      scanf("%d", &nums1[i]);
  }   
  
  printf("\n\nEis os dados que foram digitados para o array:\n\n");
  for (i = 0; i < 5; i++)
  {
      printf("\t\n%d\n", nums1[i]);
  }
     
// abertura do ficheiro dados.dat para escrita bin�ria
                       
  if ( (fp  = fopen("dados.dat", "wb")) == NULL)
  {
     printf("\n\nERRO!\nO Ficheiro n�o foi aberto para escrita.\n");
     
     printf("\n\nDigite uma tecla para terminar Programa\n");
     
     fflush(stdin);
     ch = getchar();   
              
     exit(0);     
  }
  
// se cheguei a esta parte do programa � que est� tudo bem

// os argumentos do comando abaixo s�o os seguintes:
//
// o endere�o do 1� elemento do array (mesmo que nums)
// o tamanho de um inteiro
// o n�mero de valores a carregar no ficheiro
// o ponteiro do ficheiro

  if(fwrite(&nums1[0], sizeof(int), 5, fp) != 5)
  {
     printf("ERRO!\nNao foram escritos todos os elementos.\n");
     printf("\n\nDigite uma tecla para terminar Programa\n");
     
     fflush(stdin);
     ch = getchar();   
              
     exit(1);     
  }  
   
  printf("\n\n\nOs dados foram gravados no ficheiro com sucesso ");

  fclose(fp); 
  
// abertura do ficheiro dados.dat agora para leitura
                       
  if ( (fp  = fopen("dados.dat", "rb")) == NULL)
  {
     printf("\n\nERRO!\nO Ficheiro n�o foi aberto para leitura.\n");
     
     printf("\n\nDigite uma tecla para terminar Programa\n");
     
     fflush(stdin);
     ch = getchar();   
              
     exit(0);     
  }

// leitura dos valores do ficheiro para o array nums2
  
  n = fread(&nums2[0], sizeof(int), 5, fp); 
  
  if(n != 5)
  {
      printf("\n\nForam lidos apenas %d elementos\n\n"); 
  }
  
  printf("\n\nEis os dados carregados no array nums2\n");
   
  printf("a partir do ficheiro:\n\n");
  
  for (i = 0; i < 5; i++)
  {
      printf("\t\n%d\n", nums2[i]);
  }
  
  fclose(fp);  
  printf("\n\n\n");
  system("PAUSE");	  
  return 0;
 }

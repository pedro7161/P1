#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 
 
// Programa Ref_072_fichs_bin_arrays2

/*
  Este programa solicita ao utilizador que digite 
  cinco valores inteiros para um array e armazena-os 
  num ficheiro bin�rio.
  
  Em seguida, pede ao utilizador um n�mero entre 1 e 5 
  e mostra o valor que tinha sido introduzido nessa
  ordem.
  
  Al�m disto, mostra tamb�m o 1� e �ltimo elemento do
  ficheiro.
*/

// Permite posicionamentos/saltos no ficheiro bin�rio

/*
  Saltos no ficheiro - cl�usulas:
         
  SEEK_SET (ou o valor 0) Salto a partir da origem do ficheiro
           
  SEEK_CUR (ou o valor 1) Salto a partir da posi��o corrente
  
  SEEK_END (ou o valor 2) Salto a partir do fim do ficheiro
  
  Fun��o de posicionamento:

	fseek()

  Exemplo:
          
  Ir para o fim do ficheiro:
                  
  fseek(fp, 0L, SEEK_END);
  
  ou:
            
  fseek(fp, 0L, 2);                           
*/

 int main( )
 {
  FILE *fp; 
  
  int i, n, x;
  char ch;
  int nums[5];
  
// Carregamento do array

  printf("\n\nCarregamento no array de cinco inteiros digitados\n\n");
  for (i = 0; i < 5; i++)
  {
      printf("\n\n Digite o valor inteiro %d: ", i);
      fflush(stdin);
      scanf("%d", &nums[i]);
  }   
  
  printf("\n\nEis os dados que foram digitados para o array:\n\n");
  for (i = 0; i < 5; i++)
  {
      printf("\t\n%d\n", nums[i]);
  }
      
// abertura do ficheiro dados.dat para escrita bin�ria
                       
  if ( (fp  = fopen("dados.dat", "w+b")) == NULL)
  {
     printf("\n\nERRO!\nO Ficheiro n�o foi criado.\n");
     
     printf("\n\nDigite uma tecla para terminar Programa\n");
     
     fflush(stdin);
     ch = getchar();   
              
     exit(0);     
  }
  
  if(fwrite(&nums[0], sizeof(int), 5, fp) != 5)
  {
     printf("ERRO!\nNao foram escritos todos os elementos.\n");
     printf("\n\nDigite uma tecla para terminar Programa\n");
     
     fflush(stdin);
     ch = getchar();   
              
     exit(1);     
  }  
   
  printf("\n\n\nOs dados foram gravados no ficheiro com sucesso ");

  printf("\n\nQual a ordem do numero que pretende ler 1..5: ");                      
  fflush(stdin);
  scanf("%d", &n);

  fseek(fp, (long) (n-1) * sizeof(int), SEEK_SET);  
  fread(&x, sizeof(int), 1, fp);   
  printf("\n\nO valor na ordem %d introduzido foi %d\n\n", n, x);  

// mostrar o 1� valor
  
  rewind(fp);
  fread(&x, sizeof(int), 1, fp);
  printf("\n\nO primeiro valor introduzido foi %d\n\n", x);  
  
//mostrar o �ltimo valor  
  fseek(fp, -(long) sizeof(int), SEEK_END);
  fread(&x, sizeof(int), 1, fp);
  printf("\n\nO ultimo valor introduzido foi %d\n\n", x);  
  
  fclose(fp);  
  printf("\n\n\n");
  system("PAUSE");
  	  
  return 0;
 }
 
 
 


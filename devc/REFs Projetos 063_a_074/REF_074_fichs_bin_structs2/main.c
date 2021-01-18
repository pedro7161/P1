#include <stdio.h>
#include <conio.h> 
#include <stdlib.h>
 
// Programa Ref_074_fichs_bin_structs2
 
// ficheiros bin�rios com structs e posicionamentos

// Escrita e leitura de registos do tipo livro
// num fich binario

// cria��o do registo do tipo livro

struct livro
{
  long num;  
  char nome[30];  
  char autor[30];   
  float valor;       
};

struct livro liv;

/*
  A estrutura acima pode ser implementada da seguinte forma:

 typedef struct 
 {
  long num;  
  char nome[30];  
  char autor[30];   
  float valor; 
        
 } livro;

 livro liv;
 
*/

 int main( )
 {
  
  FILE *fp;  
 
  char ch;
  
  long salto;
  
  
 // abertura do ficheiro para escrita-append 
    
  fp = fopen("dados.dat", "ab");
  
  if (fp == NULL)
  {
     printf("ERRO!\nO Ficheiro n�o foi aberto.\n");
     
     printf("\n\nDigite uma tecla para terminar Programa\n");
     
     fflush(stdin);
     ch = getchar();   
              
     exit(0);     
  }
  
// se cheguei a esta parte do programa � que est� tudo bem

  printf("\n\nClique em ESC para sair\n\n");  
  printf("\t ou em outra tecla para novo registo\n\n");
  
  fflush(stdin);     
  if (getch() != 27) 
  do
  {
// ler os dados de cada registo e a seguir carreg�-lo no 
// ficheiro bin�rio
// repetir at� que se digite a tecla ESC

   system("cls"); // limpa o ecr� - precisa de conio.h
     
   printf("\n\nDigite o ISBN do livro: ");
   fflush(stdin);
   scanf("%ld", &liv.num);
   
   printf("\n\nDigite o Nome do livro: ");
   fflush(stdin);
   gets(liv.nome);
      
   printf("\n\nDigite o Autor do livro: ");
   fflush(stdin);
   gets(liv.autor);   
   
   printf("\n\nDigite o valor do livro: ");
   fflush(stdin);
   scanf("%f", &liv.valor);
   
 // os args do comando fwrite s�o:
 //
 // o endere�o da vari�vel da estrutura, o tamanho da 
 // estrutura em bytes, o numero de registos a gravar
 // e o ponteiro associado ao ficheiro
   
   fwrite(&liv, sizeof(liv), 1, fp);
    
   printf("\n\nClique em ESC para sair\n\n");  
   printf("\t ou em outra tecla para novo registo\n\n");
       
   fflush(stdin);        
  }
  while (getch() != 27);    
    
    
// fecha ficheiro que estava aberto para escrita-append

    fclose(fp); 
         
// abre agora o ficheiro para leitura
 
    fp = fopen("dados.dat", "rb");    
  
// enquanto houverem registos imprimir cada um para o ecr�
      
    while (fread(&liv, sizeof(liv), 1, fp))
    {
          printf("\n\n\nISBN: %ld", liv.num);
          
          printf("\nNome: %s", liv.nome);
          
          printf("\nAutor: %s", liv.autor);
          
          printf("\nValor: %4.2f", liv.valor);  
    }  
     
        
  fclose(fp); // fecha fich anterior para escrita-append  
  
// aceder e ler um registo especifico  
// fazer reset do ptr do fich para o inicio
     
  fp = fopen("dados.dat", "rb");
   
  printf("\n\n\nDigite o numero do registo que pretenda ler: ");
    
  fflush(stdin);    
  scanf("%ld", &salto);
     
// posicionar-se

  fseek(fp, (long)(salto - 1) * sizeof(liv), SEEK_SET);
 
// ler o reg localizado 
  fread(&liv, sizeof(liv), 1, fp);

// mostrar o reg seleccionado
  printf("\n\n\n\nISBN: %ld", liv.num);
  printf("\nNome: %s", liv.nome);
  printf("\nAutor: %s", liv.autor);
  printf("\nValor: %4.2f\n\n\n", liv.valor); 
    
  fclose(fp);         
  printf("\n\n\n");
  system("PAUSE");	  
  return 0;
 }
 
 
 




#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
// Programa Ref_070_fich_structs

/*
  Este programa grava estruturas num ficheiro de texto.
  
  Finalmente, l� os dados a partir do ficheiro e mostra-os 
  no ecr�

*/

struct Aluno
{
    long num;
    char nome[30];
    int idade;
} ficha;

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    FILE *fp;
    
    /* criar ou abrir ficheiro */
    
    fp = fopen("dados.txt", "a");
     
    if(fp == NULL)
    {
      printf("ERRO!\nO Ficheiro n�o foi aberto.\n");
      
      return 1;
    }
    
/* inserir dados - terminar o input 
   com um n�mero de aluno negativo 
*/
     
    printf("\nDigite os dados dos alunos.\n\n");
    
    printf("Para terminar digite um numero de aluno negativo.\n");
    
    printf("\nNumero: "); 
    fflush(stdin);
    scanf("%ld", &ficha.num);
    
    while(ficha.num > 0)
    {
     printf("Nome - uma palavra: ");
     fflush(stdin);
     gets(ficha.nome);
        
     printf("Idade: "); 
     fflush(stdin);
     scanf("%d", &ficha.idade);
               
     fprintf(fp, "%ld %s %d\n", ficha.num, ficha.nome, ficha.idade);
       
     printf("\n\nNumero: "); 
     fflush(stdin);
     scanf("%ld", &ficha.num);
    }      
    
    fclose(fp); // fecha ficheiro de escrita
  
  // reabrir fich para leitura
  
    fp = fopen("dados.txt", "r");
     
    if(fp == NULL)
    {
      printf("ERRO!\nO Ficheiro n�o foi aberto.\n");
      
      return 1;
    }
  
  // mostrar os dados armazenados no ficheiro 
  
    while(
	fscanf(fp, "%ld %s %d", &ficha.num, ficha.nome, &ficha.idade) != EOF )
    {
        printf("\n\n%ld %s %d\n", ficha.num, ficha.nome, ficha.idade);
    }
    
  printf("\n\n\n"); 
  system("PAUSE");	
  return 0;
}


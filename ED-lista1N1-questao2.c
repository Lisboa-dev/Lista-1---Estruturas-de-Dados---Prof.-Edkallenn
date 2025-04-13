#include <stdio.h>
#include <stdlib.h>

#include "definir.h"

//definições

int *potencia_fatorial_crescente_2(int n, int p);
int ** matriz_fatorial_crescente_2(int n,int range_n, int p, int range_p);
int * potencia_fatorial_decrescente_2(int n, int p);
int **matriz_fatorial_decrescente_2(int n,int range_n, int p, int range_p);
void exibir_functions_2();
void criar_exibir_documento_txt(int x, int a, int y, int b);*/






int *potencia_fatorial_crescente_2(int n,int p ){
 //n se trata da base do fatorial e p seria um limite pro crescimento

  int termof=n;

  int* matriz_crescente = malloc((p+3)*sizeof(int));

  if(matriz_crescente!=NULL){
    printf(". ");
  }else{
        perror("alocação de mémoria falho");
        exit(EXIT_FAILURE);
   }

   termof=n;
   matriz_crescente[0]=termof;
   int contar=0;
    for(int i=1; i<=p; i++){

        contar++;
        termof+=i*2;
        n*=termof;
        
        matriz_crescente[contar]=termof;
    }
    
    matriz_crescente[p+1]=-1;
    matriz_crescente[p+2]=n;

    //a intenção dessa matriz é retornar um array simples com os valores do fatorial

    return matriz_crescente;
}







int *potencia_fatorial_decrescente_2(int n, int p)
{
    //n se trata da base do fatorial e p seria um limite pro decrescimento
    int termof=n;

    //alocação de memoria inicio
    int* matriz_decrescente = malloc((p+3)*sizeof(int));
    if(matriz_decrescente!=NULL){
      printf(". ");
    }else{
          perror("alocação de mémoria falho\n");
          exit(EXIT_FAILURE);
     }
   //alocação de memoria fim

  
   //preencher colunas da matriz 


   matriz_decrescente[0]=termof;
    int contar=0;
      for(int i=1; i<=p; i++){
        contar++;
        termof-=2*i;
        n*=termof;
  
        matriz_decrescente[contar]= termof;
      }
  
      matriz_decrescente[p+1]=-1;
      matriz_decrescente[p+2]=n;
  
      //a intenção dessa matriz é retornar um array simples com os valores do fatorial
  
      return matriz_decrescente;
}



int** matriz_fatorial_decrescente_2(int n, int range_n, int p, int range_p)
{
// os ranges são valores inciais enquanto, o n e p, são os valores finais. isso gera um gap de valores.
 
  int **matriz=(int**)malloc((n-range_n)*sizeof(int*));
  for (int i=0; i<(n-range_n); i++){
    matriz[i]=(int*)malloc((p+3 )*sizeof(int));
  }
  

   for (int i=0; i<=(n-range_n); i++){
      for (int j=0; j<(p-range_n); j++){
        printf("\n");
        matriz[i]= potencia_fatorial_decrescente( i, j );
      }
      printf("\n");
   }

   return matriz;
}





int** matriz_fatorial_crescente_2(int n, int range_n, int p, int range_p)
{
// os ranges são valores inciais enquanto, o n e p, são os valores finais. isso gera um gap de valores.
 
  int **matriz=(int**)malloc((n-range_n)*sizeof(int*));
  for (int i=0; i<(n-range_n); i++){
    matriz[i]=(int*)malloc((p+3 )*sizeof(int));
  }
  

   for (int i=0; i<=(n-range_n); i++){
      for (int j=0; j<(p-range_n); j++){
        printf("\n");
        matriz[i]= potencia_fatorial_crescente( i, j );
      }
      printf("\n");
   }

   return matriz;
}







 void exibe_matriz_fatorial_2(int **matriz, int diferenca_ran_n, int diferenca_ran_p )
       { //os argumentos inteiros são matriz, a diferença de n e ranged e, a diferença de p e ranged
        
        int rows=diferenca_ran_n;
        int cols=diferenca_ran_p+1;
        

        for (int i = 1; i <=rows ; i++)
        {   printf("\n ");

            for(int j=0;j<=cols;j++ )
            {printf("%d  ", matriz[i][j]);}
        }
        printf("\n");
       }
 


int main(){
    int** matrizI=matriz_fatorial_crescente(5,0,5,0);
    int** matriz= matriz_fatorial_decrescente(5,0,5,0);
    exibe_matriz_fatorial(matriz,5,5);
    exibe_matriz_fatorial(matrizI,5,5);
}




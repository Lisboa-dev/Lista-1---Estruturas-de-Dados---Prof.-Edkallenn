#include <stdlib.h>
#include <stdio.h>
#include "../header/function_4.h"
#include "/workspaces/Lista-1---Estruturas-de-Dados---Prof.-Edkallenn/ED-lista1N1-questao7/functions/function_7.c"
#include "/workspaces/Lista-1---Estruturas-de-Dados---Prof.-Edkallenn/ED-lista1N1-questao7/header/exercicio_7.h"

int * verificar_numero_automorfico(int n, int *array){
   int contar =0;
  for(int i=2; i<=n; i++)
  { 
      if( eh_numero_automorfico (i)== 1){

        contar++;
        array= realloc(array, contar * sizeof(int));

        if(array==NULL)
          {
            perror("erro de locação");
            exit(EXIT_FAILURE);
        }

        array[contar-1]=i;
      }

  }
  contar++;
  array= realloc(array, contar * sizeof(int));

  if(array==NULL)
    {
      perror("erro de locação");
      exit(EXIT_FAILURE);
  }
  array[contar-1]=-1;

  return array;
}

int eh_numero_automorfico(int n)
{  int contador=0, digito=n;

   while(digito!=0){
     contador++;
     digito/=10;
   }
  
   int A= elevar_(n,2), B= elevar_(10,contador);
   int comparar= A%B;

   if(n-comparar==0){
       return 1;
   }

}

void exibir_numero_automorfico(int array[]){
    int i=0;
    while(array[i]!=-1){
        printf("%d ",  array[i]);
        i++;
    }
    free(array);
}
/*
int main(){
    int *array=NULL;

    array=verificar_numero_automorfico(100, array);

    exibir_numero_automorfico(array);
}*/
#include <stdlib.h>
#include <stdio.h>
#include "../header/exercicio_10.h"

int * fibonacci_max(int n, int *array){
    int contador=2;

   if(n>2){
    array=realloc(array, contador * sizeof(int));

   array[0]= 0;
   array[1]= 1;

   int sequencia=3;
    while(sequencia<=n){
        
        sequencia = array[contador-1] + array[contador-2];

       contador++;

       array=realloc(array, contador * sizeof(int));
       if (array ==NULL){
          perror("falha em alocar memoria");
          exit(EXIT_FAILURE);
       }
       

      array[contador-1]=sequencia;

    }
  
    contador++;

    array=realloc(array, contador * sizeof(int));
    if (array ==NULL){
       perror("falha em alocar memoria");
       exit(EXIT_FAILURE);
    }


   array[contador-1]=-1;

   return array;}

   else{
    printf("valor invalido, insira um inteiro maior que 1");
    return array;}

    
}

void exibir_fibonacci( int array[]){
    int i=0;

    printf("mensagem \n");
   
    while(array[i]!=-1){
        printf("%d ", array[i]);
        i++;
    }
    

    free(array);
}
/*
int main(){
   int *array= NULL;

   array= fibonacci_max(15,array);

   exibir_fibonacci ( array);
   return 0;

}*/
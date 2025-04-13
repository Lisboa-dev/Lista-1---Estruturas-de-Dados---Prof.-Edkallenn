#include <stdlib.h>
#include <stdio.h>
#include "../header/exercicio_3.h"



int * verificar_amigavel (int n, int* array){
   int Pn_1=0, tamanho_ini = 0, Pn_2 =0;
   

    for (int i=1; i<n; i++){
        if(n%i==0){
           tamanho_ini++;
           array = realloc(array, tamanho_ini * sizeof(int));

           if(array==NULL){
             perror("erro de alocagem de memoria");
             exit(EXIT_FAILURE);
           }

           array[tamanho_ini-1]= i;
           
            Pn_1 += i;
        }
    }

    for (int i=1; i<Pn_1; i++){
        if(Pn_1%i==0){
            Pn_2 += i;
        }
    }

   if(Pn_2 == n){


    tamanho_ini ++;
    array = realloc(array, tamanho_ini * sizeof(int));
    if(array==NULL){
      perror("erro de alocagem de memoria");
      exit(EXIT_FAILURE);
    }

    array[tamanho_ini-1]= -1;

    tamanho_ini ++;
    array = realloc(array, tamanho_ini * sizeof(int));
    if(array==NULL){
      perror("erro de alocagem de memoria");
      exit(EXIT_FAILURE);
    }

    array[tamanho_ini-1]= Pn_1;

    
    return array;
}

}

void exibir_amigavel (int array[]){
    int i=0;

    printf("mensagem \n");

    while(array[i]!=-1){
        printf("%d ", array[i]);
        i++;
    }
    
    printf("\n o valor total é: %d", array[i+1]);

    free(array);
}

/*int main(){
    int *array=NULL;

    array = verificar_amigavel ( 220, array);
    
    exibir_amigavel(array);
}*/
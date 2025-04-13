#include <stdlib.h>
#include <stdio.h>
#include "../header/exercicio_11.h"

void rotacionar_array(int *array, int *rotacionado, int T1);
int permutacao_circular(int *array, int *array2, int T1);
int *preencher_array(int *tamanho) ;


// Função para rotacionar o array
void rotacionar_array(int *array, int *rotacionado, int T1) {
    rotacionado[0]= array[T1-1];

    for (int i = 1; i < T1; i++) {
        rotacionado[i] = array[(i-1) % T1]; // Rotação cíclica
    }
}

// Função para verificar permutação circular
int permutacao_circular(int *array, int *array2, int T1) {
    int rotacionado[T1];
    int iguais;


      if(array[T1-1]==array2[0]){
            iguais=1;

            printf("O segundo array é uma permutação circular do primeiro.\n");
            rotacionar_array(array, rotacionado, T1);

             for (int i = 0; i<T1; i++){
               if(rotacionado[i]==array2[i]){
                    iguais*=1;
                }
                else{
                    iguais*=0;
                }
            }
                
        }
      else if(array2[T1-1]==array2[0]){
            printf("O primeiro array é uma permutação circular dosegundo.\n");
            iguais = 1;

            for (int i = 0; i<T1; i++){
                if(rotacionado[i]==array2[i]){
                     iguais*=1;
                 }
                 else{
                     iguais*=0;
                 }
             }
        }
        else{ 
            printf("Os arrays não são permutações circulares.\n");
            iguais = 0;}
    
    
    
    return iguais;
}

// Função para preencher o array
int *preencher_array(int *tamanho) {
    printf("Insira o tamanho do array: ");
    scanf("%d", tamanho);

    int *array = (int *)malloc(*tamanho * sizeof(int));
    if (array == NULL) {
        perror("Erro de alocação de memória.");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < *tamanho; i++) {
        printf("Insira o valor do elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    return array;
}




#include <stdlib.h>
#include <stdio.h>

int * preencher_array();
void rotacionar_array(int *array, int *rotacionado, int T1);
int permutacao_circular(int *array, int *array2, int T1);



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
int *preencher_array() {
    int tamanho;
    printf("Insira o tamanho do array: ");
    scanf("%d", &tamanho);

    int *array = (int *)malloc(tamanho * sizeof(int));
    if (array == NULL) {
        perror("Erro de alocação de memória.");
        exit(EXIT_FAILURE);
    }
       array[0]=tamanho;
    for (int i = 1; i = tamanho; i++) {
        printf("Insira um valor para adiciona elemento no arrey: ");
        scanf("%d", &array[i]);
    }

    return array;
}



int main(){
    printf("Preenchendo o primeiro array:\n");
                int *array1 = preencher_array();

                printf("Preenchendo o segundo array:\n");
                int *array2 = preencher_array();
                
               int tamanho1=array1[0], tamanho=array2[0];


                if (tamanho1 != tamanho2) {
                    printf("Os arrays têm tamanhos diferentes e não podem ser permutações circulares.\n");
                } else {
                    permutacao_circular(array1, array2, tamanho1);
                }

                // Libera a memória alocada
                free(array1);
                free(array2);
    return 0;
}
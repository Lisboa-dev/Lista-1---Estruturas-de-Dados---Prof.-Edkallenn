#include <stdio.h>

#include <stdlib.h>

int* potencia_fatorial_crescente(int x, int y, int * array);
int* potencia_fatorial_decrescente(int x, int y, int * array);
int **matriz_fatorial_decrescente(int x, int a, int y, int b, int **array);
int ** matriz_fatorial_crescente(int x, int a, int y, int b, int **array);
void exibir_functions(int x, int a, int y, int b, int **array);



int* potencia_fatorial_crescente(int x, int y, int * array){

    int v=x;
    array = (int*)malloc(y+2 * sizeof(int));

    
    if(array==NULL){
        perror("erro de alocagem de memoria");
        exit(EXIT_FAILURE);
    }

    for (int i=1; i<y; i++){

        v=v*(x+i);
       /*teste printf("decre \n\n valor v: %d \n valor x: %d \n", v, x);*/
       array[tamanho-1]= i;
    }
    
    array[y]=-1;
    array[y+1]= v;


    return array;
    }
   



int * potencia_fatorial_decrescente(int x, int y, int * array){

    int v=x;
    array = (int*)malloc((y+2) * sizeof(int));

    
    if(array==NULL){
        perror("erro de alocagem de memoria");
        exit(EXIT_FAILURE);
    }

    for (int i=1; i<y; i++){

        v=v*(x-i);
       /*teste printf("decre \n\n valor v: %d \n valor x: %d \n", v, x);*/
       array[tamanho-1]= i;
    }

          array[y]=-1;
           array[y+1]= v;

    return array;
}
/**************************************************************************************************************************** */

int ** matriz_fatorial_crescente(int x, int a, int y, int b, int**arrayA, int**arrayB)
{
   
    printf(" \n ********************** uma matriz de fatorias crescentes *********************\n \n");

    for (int i=a+1; i<=x; i++)
    {
        printf(" %d |", i);
        
        for(int j=b+1; j<=y; j++){

            int valor=0;
            valor = potencia_fatorial_crescente(i, j, array);
            printf(" %d", valor);
           
        }
       
    }
    return **array;
}
int **matriz_fatorial_decrescente(int x, int a, int y, int b, int ** array)
{   int linhas=(x-(a+1))+2

    array=(int**)malloc(linhas * sizeof(int))
    array=(int*)malloc( (y+2) * sizeof(int))

    printf("\n  ********************** uma matriz de fatorias decrescentes *********************\n\n");

    for (int i=a+1; i<=x; i++)
    {

        printf(" %d |", i);

        for(int j=y; j>b; j--){

            int valor=0;
            array[i][y+2]= potencia_fatorial_crescente(i, j, *array);
            printf(" %d", valor);
        }
        printf("\n\n");
    }
    return **array;
}

/**************************************************************************************************************************** */


void exibir_functions(int x, int a, int y, int b, int **array)
{

    int linhas= ((x-(a+1))+2);

    int **array2;

    array2= (int **)malloc( linhas * sizeof(int) );
    array2= (int*) malloc( (y+2) * sizeof(int));

    printf("\n o fatorial da base inserida é:  %d\n",exibir1);
    printf(" o fatorial da base inserida é:  %d \n\n", exibir2);

    matriz_fatorial_crescente( x, a, y, b,**array);

    for (int i = 0; i < (x-(a+1)); i++)
    {
        printf("\n")

        for (int j = 0; j < y+2; j++)
        {
          printf("%d ", array2[i][j]);
        }
    
    }

    
   
    for(int=0; i<linhas; i++){
        free(array2[i]);
    }

    free (array2);




    array2= (int **)malloc(linhas * sizeof(int) );
    array2= (int*) malloc() (y+2) * sizeof(int));


   array2= matriz_fatorial_decrescente( x, a, y, b,int **array);

   for (int i = 0; i < (x-(a+1)); i++)
   {
       printf("\n")

       for (int j = 0; j < y+2; j++)
       {
         printf("%d ", array2[i][j]);
       }
   
   }
   for(int=0; i<linhas; i++){
    free(arrayB[i]);
   }

free (arrayB);


for(int=0; i<linhas; i++){
    free(arrayA[i]);
}

free (arrayA);
}



/*void criar_exibir_documento_txt( array[])
{
   
        
    
        FILE *arq = fopen("editor.txt", "w");
    
        if (arq == NULL) {
            printf("Erro na abertura do arquivo!");
            return 1;
        }
            fprintf(arq, "%s\n", texto[i]);

            int exibir1=potencia_fatorial_crescente( x, y);
            int exibir2=potencia_fatorial_decrescente( x, y);
        
            fprintf(arq,"\n o fatorial da base inserida é: ");
            fprintf(arq," o fatorial da base inserida é:" );



        
        fclose(arq);
    
        return 0;

}*/

int main(){
    int c=5,b=5,A=10,B=10;
  
    int **arrayA=NULL;
    int **arrayB=NULL;

    exibir_functions(A,c,B,b,arrayA, arrayB );
}

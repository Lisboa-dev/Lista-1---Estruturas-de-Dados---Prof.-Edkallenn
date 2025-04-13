#include <stdio.h>
#include <stdlib.h>

#include "/workspaces/Lista-1---Estruturas-de-Dados---Prof.-Edkallenn/ED-lista1N1-questao2/functions/function_1.c"
#include "/workspaces/Lista-1---Estruturas-de-Dados---Prof.-Edkallenn/ED-lista1N1-questao2/functions/function_3.c"
#include "/workspaces/Lista-1---Estruturas-de-Dados---Prof.-Edkallenn/ED-lista1N1-questao2/functions/function_4.c"
#include "/workspaces/Lista-1---Estruturas-de-Dados---Prof.-Edkallenn/ED-lista1N1-questao2/functions/function_5.c"
#include "/workspaces/Lista-1---Estruturas-de-Dados---Prof.-Edkallenn/ED-lista1N1-questao2/functions/function_6.c"
#include "/workspaces/Lista-1---Estruturas-de-Dados---Prof.-Edkallenn/ED-lista1N1-questao2/functions/function_7.c"
#include "/workspaces/Lista-1---Estruturas-de-Dados---Prof.-Edkallenn/ED-lista1N1-questao2/functions/function_8.c"
#include "/workspaces/Lista-1---Estruturas-de-Dados---Prof.-Edkallenn/ED-lista1N1-questao2/functions/function_9.c"
#include "/workspaces/Lista-1---Estruturas-de-Dados---Prof.-Edkallenn/ED-lista1N1-questao2/functions/function_10.c"
#include "/workspaces/Lista-1---Estruturas-de-Dados---Prof.-Edkallenn/ED-lista1N1-questao2/functions/function_11.c"

#include "/workspaces/Lista-1---Estruturas-de-Dados---Prof.-Edkallenn/ED-lista1N1-questao11/header/exercicio_1.h"
#include "/workspaces/Lista-1---Estruturas-de-Dados---Prof.-Edkallenn/ED-lista1N1-questao11/header/exercicio_3.h"
#include "/workspaces/Lista-1---Estruturas-de-Dados---Prof.-Edkallenn/ED-lista1N1-questao11/header/exercicio_4.h"
#include "/workspaces/Lista-1---Estruturas-de-Dados---Prof.-Edkallenn/ED-lista1N1-questao11/header/exercicio_5.h"
#include "/workspaces/Lista-1---Estruturas-de-Dados---Prof.-Edkallenn/ED-lista1N1-questao11/header/exercicio_6.h"
#include "/workspaces/Lista-1---Estruturas-de-Dados---Prof.-Edkallenn/ED-lista1N1-questao11/header/exercicio_7.h"
#include "/workspaces/Lista-1---Estruturas-de-Dados---Prof.-Edkallenn/ED-lista1N1-questao11/header/exercicio_8.h"
#include "/workspaces/Lista-1---Estruturas-de-Dados---Prof.-Edkallenn/ED-lista1N1-questao11/header/exercicio_10.h"
#include "/workspaces/Lista-1---Estruturas-de-Dados---Prof.-Edkallenn/ED-lista1N1-questao11/header/exercicio_11.h"





/*
**    Função : Executar todas as funções das questões.
**    Autor : Matheus Lira Lisboa.
**    Data  : 11/04/2025.
**    Observações: achei mais pratco rodar só no main msm, as descrições das funções estão nos outros arquivos.
*/




int main(){


   /***************************inicializar variaveis************************** */

   /*menu*/ int habilitar=0, encerrar=1;
  

  /*exercicio 1*/ int var1=0, var2=0, crescente=0, decrescente=0;
 
  /***************************inicializar variaveis************************** */




  printf(" deseja hbiliar o clear? digite 1 para sim e 2 para não\n");

  scanf(" %d" ,&habilitar);




 do{
      printf("menu\n");

      printf("insira o numero da alternativa que deseja testar: ");

      int caso=0;
      scanf("%d",&caso);
      
      printf("\n")

        switch (caso)
        {
            case 1:
                
           
                int c=5,b=5,A=10,B=10;
              
                int **arrayA=NULL;
                int **arrayB=NULL;
            
                exibir_functions(A,c,B,b,arrayA, arrayB );
            
            


               
               
            break;
        
            case 2:
            break;
            case 3:

            int *array=NULL;

            array = verificar_amigavel ( 220, array);
            
            exibir_amigavel(array);

            break;

            case 4:
            int *array=NULL;

            array=verificar_numero_automorfico(100, array);
        
            exibir_numero_automorfico(array);
            break;
            case 5:

            int valor=0;
            printf("insira ");
            scanf("%d", &valor);
            float b3 =0.0;
            b3 =  soma_fatoriais_inversos(valor);
            printf("\n %f",b);

            break;
            case 6:
            break;
            case 7:
            int eh_numero_feliz (int n)
            break;
            case 8:
             for(int i=1; i<=100; i++){
                if( eh_numero_armstrong(i)==1){
                    printf("o valor %d é armstrong \n", i);
                } 
              }
            
              if( eh_numero_armstrong(153)==1){
                printf("ai dento \n");
              }
            break;
            case 9:

             exibir_numero_perfeito(1,100000);
        
             break;
            case 10:
            int *array= NULL;

            array= fibonacci_max(15,array);
         
            exibir_fibonacci ( array);
            return 0;
            break;
            case 11:
              int tamanho1 = 0, tamanho2 = 0;

                printf("Preenchendo o primeiro array:\n");
                int *array1 = preencher_array(&tamanho1);

                printf("Preenchendo o segundo array:\n");
                int *array2 = preencher_array(&tamanho2);

                if (tamanho1 != tamanho2) {
                    printf("Os arrays têm tamanhos diferentes e não podem ser permutações circulares.\n");
                } else {
                    permutacao_circular(array1, array2, tamanho1);
                }

                // Libera a memória alocada
                free(array1);
                free(array2);

            break;
            case 12:
            break;

            default:
            encerrar = 0;
        }

        if (habilitar==1){system("clear");}
   }while(encerrar!=0);

    return 0;

}
#include <stdlib.h>
#include <stdio.h>
#include "../header/exercicio_5.h"
#include "../../ED-lista1N1-questao1/functions/function_1.c"
#include "../../ED-lista1N1-questao1/header/exercicio_1.h"



float soma_fatoriais_inversos(int n){
     float b =0.0;
      for(int i=1; 1<=n; i++){

         b=b+1/ potencia_fatorial_decrescente(i,i);
      }
      return b;
}


i/*nt main(){
    
    int valor=0;
    printf("insira ");
    scanf("%d", &valor);
    float b =0.0;
    b =  soma_fatoriais_inversos(valor);
    printf("\n %f",b);

    return 0;
}*/
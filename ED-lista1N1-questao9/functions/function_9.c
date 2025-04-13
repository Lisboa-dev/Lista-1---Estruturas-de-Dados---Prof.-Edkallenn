#include <stdlib.h>
#include <stdio.h>
#include "../header/exercicio_9.h"
#include "/workspaces/Lista-1---Estruturas-de-Dados---Prof.-Edkallenn/ED-lista1N1-questao7/functions/function_7.c"
#include "/workspaces/Lista-1---Estruturas-de-Dados---Prof.-Edkallenn/ED-lista1N1-questao7/header/exercicio_7.h"


int eh_numero_perfeito(int n){
    int somar= 0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            somar+=i;
        
        }

    }
    if(somar==n && somar>0){
        return 1;
    }
    else{return 0;}
}

int exibir_numero_perfeito(int x, int y){
    for (int i=0; i<=y; i++){
      if(  eh_numero_perfeito(i)==1){
        printf("%d ",i);
      }
    }

}


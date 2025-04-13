#include <stdlib.h>
#include <stdio.h>
#include "ED-lista1N1-questao7.c"
#include "definir.h"
/*
int eh_numero_perfeito(int n);
*/
int exibir_numero_perfeito(int x, int y);

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

int main({
    for(int i=1; i<=100; i++){
        if( eh_numero_armstrong(i)==1){
            printf("o valor %d é armstrong \n", i);
         } }
      
        printf("insira um valor: ");
        int x=0;
        scanf("%d",&x);
       
       if( eh_numero_armstrong(x)==1){
        printf("é um numero de earmstrong");intf("ai dento \n");
      }
})
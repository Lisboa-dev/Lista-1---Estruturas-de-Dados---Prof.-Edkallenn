#include <stdlib.h>
#include <stdio.h>
#include "../header/exercicio_8.h"
#include "/workspaces/Lista-1---Estruturas-de-Dados---Prof.-Edkallenn/ED-lista1N1-questao7/functions/function_7.c"

int eh_numero_armstrong(int n){
     int soma=0, digito=0, n_2=n, contar=0;

    while(n_2>0){contar++; n_2/=10;}

    n_2=n;
       
    while (n > 0) {

        digito = n % 10;          // Extrai o último dígito
        soma += elevar_(digito, contar); // Soma dos quadrados dos dígitos
         n /= 10;                 // Remove o último dígito
        
      }

      
     
   return n_2==soma;
}
/*
int main(){

    for(int i=1; i<=100; i++){
    if( eh_numero_armstrong(i)==1){
        printf("o valor %d é armstrong \n", i);
    } 
  }

  if( eh_numero_armstrong(153)==1){
    printf("ai dento \n");
  }
}*/
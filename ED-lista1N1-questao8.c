#include <stdlib.h>
#include <stdio.h>
#include "ED-lista1N1-questao7.c"



int eh_numero_armstrong(int n);


int eh_numero_armstrong(int n){
     int soma=0, digito=0, n_2=n, contar=0;

    while(n_2>0){contar++; n_2/=10;}

    n_2=n;
       
    while (n > 0) {

        digito = n % 10;          // Extrai o último dígito
        soma += elevar(digito, contar); // Soma dos quadrados dos dígitos
         n /= 10;                 // Remove o último dígito
        
      }

      
     
   return n_2==soma;
}

/*int main(){

    for(int i=1; i<=100; i++){
    if( eh_numero_armstrong(i)==1){
        printf("o valor %d é armstrong \n", i);
     } }
  
    printf("insira um valor: ");
    int x=0;
    scanf("%d",&x)
   
   if( eh_numero_armstrong(x)==1){
    printf("é um numero de earmstrong");
  }
}*/
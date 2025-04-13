#include <stdlib.h>
#include <stdio.h>
#include "../header/exercicio_7.h"

int elevar_(int x, int y){
    int u =1;
    for(int i=0; i<y; i++){
        u*=x;   
    }
   return u;
}

int eh_numero_feliz (int n){

    int digito, soma=0, validar=n;
    
    while (n != 1 && validar!=soma) {
        // Sai quando número é feliz ou entra em ciclo
         soma = 0;

        while (n > 0) {

          digito = n % 10;          // Extrai o último dígito
          soma += elevar_(digito,2); // Soma dos quadrados dos dígitos
           n /= 10;                 // Remove o último dígito
           
        }

      n = soma; // Atualiza n com a soma
        }
        return n == 1; // Retorna verdadeiro se n for feliz
    }
    
   

   
    


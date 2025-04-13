#include <stdlib.h>
#include <stdio.h>
#include "definir.h"



int eh_numero_feliz_ (int n);
int elevar(int x, int y;)


int elevar(int x, int y){
  int u =1;
  for(int i=0; i<y; i++){
      u*=x;   
  }
 return u;
}

int eh_numero_feliz_ (int n){

    int digito, soma=0, validar=n;
    
    while (n != 1 && validar!=soma) {
        // Sai quando número é feliz ou entra em ciclo
         soma = 0;

        while (n > 0) {

          digito = n % 10;          // Extrai o último dígito
          soma += digito*digito; // Soma dos quadrados dos dígitos
           n /= 10;                 // Remove o último dígito
           
        }

      n = soma; // Atualiza n com a soma
        }
        return n == 1; // Retorna verdadeiro se n for feliz
    }
    
   
int main(){
  printf("insira um valor para veificar se é feliz: ");
  scanf("%d",&numero);
  printf("\n");
   eh_numero_feliz_ (numero);
}
   
    


#include <stdlib.h>
#include <stdio.h>
#include "definir.h"

int fatorial_decrescente_(int n, int p);
float soma_fatoriais_inversos_(int n);




int fatorial_decrescente_(int n, int p){
    int n_subtraido=n;
    for (int i=0; i<p; i++){
        n*=n_subtraido-i;
    }
    return n;
}

float soma_fatoriais_inversos_(int n){
     float b =0.0;
      for(int i=1; 1<=n; i++){

         b=b+1/ fatorial_decrescente_(i,i);
      }
      return b;
}
int main(){
int valor=0;
printf("insira ");
scanf("%d", &valor);
float b3 =0.0;
b3 =  soma_fatoriais_inversos(valor);
printf("\n %f",b3);
}
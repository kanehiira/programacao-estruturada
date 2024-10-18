#include <stdio.h>

//Escreva um programa que leia um inteiro n e imprima os n primeiros números primos.

void primos(int num) {
  #define nmax 1000
  
  int i=0, j, k, cont, primos[nmax];
  
  do {    
      for (j=1;j<=100;j++) {
        cont=0;
      
        for (k=1;k<=(j/2);k++) { //conta o número de divisores
          if (j%k==0) cont++;
          else continue;
        }
        
        if (cont==1) { //verifica se são primos
          primos[i] = j;
          i++;
        }
      }
  } while (i<num);
  
  for (i=0;i<=(num-1);i++) printf("%d é o %dº número primo.\n", primos[i], (i+1));
}

int main () {
  int num;
  
  printf("Digite um número: ");
  scanf("%d",&num);
  
  primos(num);
  
  return 0;
}

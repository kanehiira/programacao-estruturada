#include <stdio.h>

//Escreva um programa em C que leia um número n do usuário e imprima todos os números primos no intervalo [1,n].

void primos(int num) {
  int i, j;
  
  for (i=1;i<=num;i++) {
    int cont=0;
  
    for (j=1;j<=i;j++) {
      if (i%j==0) cont++;
      else continue;
    }
    
    if (cont == 2) printf("%d é primo\n",i);
    else continue;
  }
}

int main () {
  int num;
  
  printf("Digite um número: ");
  scanf("%d",&num);
  
  primos(num);
  
  return 0;
}

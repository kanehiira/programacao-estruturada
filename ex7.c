#include <stdio.h>

// Escreva um programa que leia dois inteiros i e j, onde i ≤ j, e que imprima todos os números primos no intervalo [i, j].

void primos(int num1, int num2) {
  int i, j, cont;

  for (i=num1; i<=num2; i++) {
    cont = 0;
    
    for (j=1;j<=(i/2);j++) { //conta o número de divisores
      if (i%j==0) cont++;
      else continue;
    }
        
    if (cont==1) { //verifica se é primo
      printf("%d é primo.\n", i);
    }
  }
}

int main() {
  int num1, num2;

  printf("Digite o primeiro número: ");
  scanf("%d", &num1);
  
  printf("Digite o segundo número: ");
  scanf("%d", &num2);
  
  if (num1 <= num2) primos(num1, num2);
  else printf("O número %d é maior que o número %d.\n", num1, num2);
  
  return 0;
}

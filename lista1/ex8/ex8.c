#include <stdio.h>

//Escreva um programa em C que leia um número inteiro n fornecido pelo usuário e imprima Fn, onde Fn é o n-ésimo número de Fibonacci.

void fibonacci(int num) {

  int i, fib = 0, fib1 = 1, fib2 = 0;
  
  if (num == 1 || num == 2) fib = 1;
  
  else {
    for (i = 2; i <= num; i++) {
      fib = fib1 + fib2;
      fib2 = fib1;
      fib1 = fib;
    }
  }

printf("O %dº elemento da sequência de Fibonacci é %d.\n", num, fib);
  
}

int main() {

  int num;
  
  printf("Digite um número: ");
  scanf("%d", &num);
  
  fibonacci(num);
  
  return 0;
  
}

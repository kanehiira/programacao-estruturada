#include <stdio.h>

//Escreva uma função em C que compute o valor de n!, onde n ∈ N.

int fatorial(int num) {  
  int i, fat=num;
  
  for(i=1;i<num;i++) {
    fat = fat * (num-i);
  }
  
  return fat;
}

int main() {
  int num;
  
  printf("Digite um número: ");
  scanf("%d", &num);
  
  printf("O fatorial de %d é %d.\n", num, fatorial(num));
  
  return 0;
}

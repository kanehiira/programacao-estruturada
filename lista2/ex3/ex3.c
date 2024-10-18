#include <stdio.h>
#define NMAX 100

// Escreva um programa que leia uma sequência de n números inteiros, 1 ≤ n ≤ 100, e imprima esses números em ordem não decrescente

void le_vetor(int valores[], int n) {
  int i;
  
  for (i=0; i<n; i++) {
    printf("Digite o %dº número: ", i+1);
    scanf("%d", &valores[i]);
  }
}

void ordena(int valores[], int n) {
  int i, j, provisorio;
  
  for (i=0; i<n; i++) {
    for (j=0; j<n; j++) {
      if (valores[i] < valores[j]) { //reorganizar em forma crescente
        provisorio = valores[j];
        valores[j] = valores[i];
        valores[i] = provisorio;        
      }
    }
  }
  
  for (i=0; i<n; i++) printf("%d\n", valores[i]);
}

int main() {
  int n, entrada[NMAX];
  
  printf("Digite um número: ");
  scanf("%d", &n);
  
  le_vetor(entrada, n);
  ordena(entrada, n);
  
  return 0;
}

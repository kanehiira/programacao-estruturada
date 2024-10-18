#include <stdio.h>
#define NMAX 100

// Escreva um programa que leia uma sequência de n números inteiros, 1 ≤ n ≤ 100, e imprima esses números em ordem não crescente

void le_vetor(int n, int v[]) {
  int i;
  
  for (i=0; i<n; i++) {
    printf("Digite o %dº número: ", i+1);
    scanf("%d", &v[i]);
  }
}

void ordena(int n, int v[]) {
  int i, j, provisorio;
  
  for (i=0; i<n; i++) {
    for (j=0; j<n; j++) {
      if (v[i] > v[j]) { //reorganizar em forma decrescente
        provisorio = v[j];
        v[j] = v[i];
        v[i] = provisorio;        
      }
    }
  }
  
  for (i=0; i<n; i++) printf("%d\n", v[i]);
}

int main() {
  int n, entrada[NMAX];
  
  printf("Digite um número: ");
  scanf("%d", &n);
  
  le_vetor(n, entrada);
  ordena(n, entrada);
  
  return 0;
}

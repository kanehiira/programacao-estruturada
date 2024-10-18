#include <stdio.h>

// Escreva um programa em C que leia uma sequência de n números inteiros e imprima os seguintes valores: o número mínimo da sequência, o máximo e a média.

void le_vetor(int entrada[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%dº número: ", i+1);
        scanf("%d", &entrada[i]);
    }
}

int maximo(int n, int v[]) {
  int i, j, provisorio;
  
  for (i=0; i<n; i++) {
    for (j=0; j<n; j++) {
      if (v[j] < v[i]) {
        provisorio = v[i];
        v[i] = v[j];
        v[j] = provisorio;
      }
    }
  }
  
  return v[0];
}

int minimo(int n, int v[]) {
  int i, j, provisorio;
  
  for (i=0; i<n; i++) {
    for (j=0; j<n; j++) {
      if (v[j] > v[i]) {
        provisorio = v[i];
        v[i] = v[j];
        v[j] = provisorio;
      }
    }
  }
  
  return v[0];
}

float media(int n, int v[]) {
  
  int i, soma = 0;
  float media = 0;
  
  for (i = 0; i < n; i++) soma = soma + v[i];
  
  media = soma/n;
  
  return media;
}

int main() {

  #define nmax 100

  int n, entrada[nmax];

  printf("Digite um número n: ");
  scanf("%d", &n);
  
  le_vetor(entrada, n);
  
  printf("\nO menor número é %d.\n", minimo(n, entrada));
  printf("O maior número é %d.\n", maximo(n, entrada));
  printf("A média é %0.2lf.\n", media(n, entrada));

  return 0;
  
}

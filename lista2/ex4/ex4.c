#include <stdio.h>
#define NMAX 1000

// Escreva um programa que, dados dois inteiros n e m, onde 1 ≤ n,m ≤ 1000, e duas matrizes A e B de ordem n×m, calcule a matriz C = A + B, onde a entrada Ci, j = Ai,j +Bi,j.

void le_matriz(int A[][NMAX], int B[][NMAX], int n, int m) {
  int i, j;
  
  for (i=0; i<n; i++) {
    for (j=0; j<m; j++) {
      printf("Digite o elemento %d,%d da matriz A: ", i, j);
      scanf("%d", &A[i][j]);
    }
  }
  
  for (i=0; i<n; i++) {
    for (j=0; j<m; j++) {
      printf("Digite o elemento %d,%d da matriz B: ", i, j);
      scanf("%d", &B[i][j]);
    }
  }
}

void soma_matriz(int A[][NMAX], int B[][NMAX], int n, int m) {
  int i, j;

  printf("Matriz C: \n");
  
  for (i=0; i<n; i++) {
    for (j=0; j<m; j++) {      
      printf("%d ", A[i][j] + B[i][j]);
    }
    
    printf("\n");
  }
}

int main() {
  int n, m, A[NMAX][NMAX], B[NMAX][NMAX];

  printf("Digite um número: ");
  scanf("%d", &n);
  
  printf("Digite outro número: ");
  scanf("%d", &m);
  
  if (n < 1 || n > NMAX || m < 1 || m > NMAX) {
    printf("Os valores de n e m devem estar entre 1 e %d.\n", NMAX);
    return 0;
  }
  
  le_matriz(A, B, n, m);
  
  soma_matriz(A, B, n, m);

  return 0;
}

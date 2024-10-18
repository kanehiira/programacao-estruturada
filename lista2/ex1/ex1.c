#include <stdio.h>
#define NMAX 100

// Sua função deve retornar i se valores[i] == chave. Se o valor 'chave' não está no vetor, então sua função deve retornar -1

void le_vetores (int v[], int n) {
  int i;
  
  for (i=0; i<n; i++) {
    printf("Digite o %dº vetor: ", i+1);
    scanf("%d", &v[i]);
  }
  
  printf("\n");
}

void busca(int v[], int n, int chave) {
  int i, busca[NMAX], soma=0;
  
  for (i=0; i<n; i++) {    
    if (v[i] == chave) busca[i] = i;
    else soma++;
  }
  
  if (soma == n) printf("\n-1\n");
  else for (i=0; i<n; i++) if (busca[i] <= n) printf("%d\n", busca[i]);
}

int main() {
  int n, chave, entrada[NMAX];
  
  printf("Digite o número de elementos do vetor: ");
  scanf("%d", &n);
  
  printf("Digite a chave: ");
  scanf("%d", &chave);
  
  printf("\n");
  
  le_vetores(entrada, n);
  
  busca(entrada, n, chave);

  return 0;
}

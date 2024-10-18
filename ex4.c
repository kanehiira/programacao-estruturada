#include <stdio.h>

//Escreva uma função em C que compute o valor de C (n,k), onde 0 ≤ k ≤ n e n, k ∈ N.

int combinatoria(int n, int k) {
  int i, fatn=n, fatk=k, fatnk=(n-k);
  
  for(i=1;i<n;i++) fatn = fatn * (n-i);
  
  for(i=1;i<k;i++) fatk = fatk * (k-i);
  
  for(i=1;i<(n-k);i++) fatnk = fatnk * ((n-k)-i);
  
  return (fatn/(fatk*fatnk));
}

int main() {
  int n,k;

  printf("Digite o valor de n: ");
  scanf("%d", &n);
  
  printf("Digite o valor de k: ");
  scanf("%d", &k);
  
  printf("\nA combinatória C %d,%d = %d\n", n, k, combinatoria(n,k));
  
  return 0;
}

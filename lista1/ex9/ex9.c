#include <stdio.h>

void produto_hadamard(int num, double u [], double v [], double resultado []) {
  int i;
  
  for (i = 0; i < num; i++) {
    resultado[i] = v[i]*u[i];
    
    printf("%0.2lf \n", resultado[i]);
  }
}

int main() {

  #define nmax 100

  int i, num;
  double v[nmax], u[nmax], resultado[nmax];
  
  printf("Digite um número: ");
  scanf("%d", &num);
  
  for (i = 0; i < num; i++) {
    printf("Digite o %dº vetor v: ", i+1);
    scanf("%lf", &v[i]);
  }
  
  for (i = 0; i < num; i++) {
    printf("Digite o %dº vetor u: ", i+1);
    scanf("%lf", &u[i]);
  }
  
  produto_hadamard(num, u, v, resultado);

  return 0;
  
}

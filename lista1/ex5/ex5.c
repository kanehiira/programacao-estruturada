#include <stdio.h>

// Escreva um programa em C que seja capaz de converter um valor de temperatura entre Celsius e Fahrenheit e vice-versa

float conversao(float temp, char escala) {
  float t=0;
  
  if (escala == 'F'||escala == 'f') t = (((temp-32)/9)*5); 
  else t = (((temp/5)*9)+32);

  return t;
}

void imprime(float temp, char escala) {
  if (escala == 'F') printf("%0.2f º%c = %0.2fºC\n", temp, escala, conversao(temp, escala));
  else printf("%0.2f º%c = %0.2fºF\n", temp, escala, conversao(temp, escala));
}

int main() {
  float temp;
  char escala;

  printf("Digite a temperatura: ");
  scanf("%f", &temp);  
  printf("Digite a unidade de medida dessa temperatura: ");
  scanf(" %c", &escala);
  
  imprime(temp,escala);
  
  return 0;
}



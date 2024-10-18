#include <stdio.h>

//Escreva um programa emC que leia um número n do usuário e imprima todos os números pares do intervalo [0,n].

void pares(int n) {
	int i;

	for(i=0;i<=n;i++) {
		if (i%2==0) {
			printf("%d\n",i);
		}
	}
}

int main() {
	int n = 0;

	printf("Digite um número: ");
	scanf("%d",&n);

	pares(n);
	
	return 0;
}

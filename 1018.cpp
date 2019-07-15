//1018
#include <iostream>

void processaValor(int valor) {
	int notas[] { 100, 50, 20, 10, 5, 2, 1 };
	register int i {}, length { sizeof(notas) / sizeof(notas[0]) }, quantidadeDeNotas {}; 
	for(i = 0; i < length; i++) {
		quantidadeDeNotas	= valor / notas[i];
		valor				%= notas[i];
		printf("%d nota(s) de R$ %d,00\n", quantidadeDeNotas, notas[i]);
	}
}

int main1018() {
	int valor {};
	scanf("%d", &valor);
	printf("%d\n", valor);
	processaValor(valor);
	return 0;
}
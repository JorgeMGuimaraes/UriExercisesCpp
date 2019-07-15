//1021
#include <iostream>
#include <math.h>
int main1021() {
	double valor {};
	scanf("%lf", &valor);
	int notas[] { 100, 50, 20, 10, 5, 2 };
	double moedas[] { 1.0l, 0.5l, 0.25l, 0.1l, 0.05l, 0.01l };
	int length { sizeof(notas) / sizeof(notas[0]) }, i {}, quantidade {};
	printf("NOTAS:\n");
	for(i = 0; i < length; i++) {
		quantidade = valor / notas[i];
		valor -= (double)quantidade * notas[i];
		printf("%d nota(s) de R$ %d.00\n", quantidade, notas[i]);
	}
	length = sizeof(moedas) / sizeof(moedas[0]);
	printf("MOEDAS:\n");
	for(i = 0; i < length - 1; i++) {
		quantidade = valor / moedas[i];
		valor -= (double)quantidade * moedas[i];
		printf("%d moeda(s) de R$ %.2f\n", quantidade, moedas[i]);
	}
	printf("%d moeda(s) de R$ %.2f\n", (int)round(valor * 100), moedas[length - 1]);
	return 0;
}
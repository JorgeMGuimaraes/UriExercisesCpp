// 1176
#include <iostream>

int main1176() {
	const int LIMITE { 61 };
	long long int serieDeFibonnaci[LIMITE] {};
	serieDeFibonnaci[0] = 0;
	serieDeFibonnaci[1] = 1;
	for(int i = 2; i < LIMITE; i++) { serieDeFibonnaci[i] = serieDeFibonnaci[i - 1] + serieDeFibonnaci[i - 2]; }
	int casos {}, entrada {};
	scanf("%d", &casos);
	for(int i = 0; i < casos; i++) {
		scanf("%d", &entrada);
		printf("Fib(%d) = %lld\n", entrada, serieDeFibonnaci[entrada]);
	}
	return 0;
}
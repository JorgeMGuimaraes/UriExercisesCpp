// 1175
#include <iostream>

int main() {
	const int LIMITE { 20 };
	int vetor[LIMITE] {};
	for(int i = 0; i < LIMITE; i++) {
		int val {};
		scanf("%d", &val);
		vetor[LIMITE - 1 - i] = val;
	}
	for(int i = 0; i < LIMITE; i++) { printf("N[%d] = %d\n", i, vetor[i]); }
	return 0;
}
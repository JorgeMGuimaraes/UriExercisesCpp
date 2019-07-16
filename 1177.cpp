// 1177
#include <iostream>

int main1177() {
	int limite {}, valor {};
	scanf("%d", &limite);
	for(int i = 0; i < 1000; i++) {
		valor = (i + limite) % limite;
		printf("N[%d] = %d\n", i, valor);
	}
	return 0;
}
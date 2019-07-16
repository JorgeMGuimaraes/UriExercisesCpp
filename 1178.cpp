// 1178
#include <iostream>

int main1178() {
	long double valor {}, anterior {};
	scanf("%Lf", &valor);
	for(int i = 0; i < 100; i++) {
		printf("N[%d] = %.4Lf\n", i, valor);
		valor /= 2.f;
	}
	return 0;
}
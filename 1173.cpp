// 1173
#include <iostream>

int main1173() {
	int valor {}, anterior {};
	scanf("%d", &valor);
	for(int i = 0; i < 10; i++) {
		printf("N[%d] = %d\n", i, valor);
		valor *= 2;
	}
	return 0;
}
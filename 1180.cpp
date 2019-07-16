// 1180
#include <iostream>

int main1180() {
	int elementos {}, menor {}, posicao {};
	scanf("%d", &elementos);
	std::cin >> menor;
	for(int i = 1; i < elementos; i++) {
		int val {};
		std::cin >> val;
		if(val < menor) {
			menor	= val;
			posicao	= i;
		}
	}
	printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);
	return 0;
}
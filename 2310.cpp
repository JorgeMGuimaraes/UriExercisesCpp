// 2310

#include <iostream>
#include <string>

int main2310() {
	int jogadores {};
	int dados[6] {};
	scanf("%d", &jogadores);
	for(int i = 0; i < jogadores; i++) {
		std::string name;
		std::cin >> name;
		int val {};
		for(int j = 0; j < 6; j++) {
			scanf("%d", &val);
			dados[j] += val;
		}
	}
	char p { '%' };
	printf(
		"Pontos de Saque: %.2f %c.\nPontos de Bloqueio: %.2f %c.\nPontos de Ataque: %.2f %c.\n",
		(double)(100.f * dados[3] / dados[0]), p,
		(double)(100.f * dados[4] / dados[1]), p,
		(double)(100.f * dados[5] / dados[2]), p);
	return 0;
}
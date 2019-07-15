//1017
#include <iostream>

float consumo_(int tempo, int velocidade) {
	register const float cons { 12.f };
	return (tempo * velocidade) / cons;
}

int main1017() {
	int tempo {}, velocidade {};
	std::cin >> tempo >> velocidade;
	printf("%.3f\n", consumo_(tempo, velocidade));
	return 0;
}

#include <iostream>
// 2862
int main2682() {
	int casos;
	std::cin >> casos;
	for (int i = 0; i < casos; i++) {
		int valor;
		std::cin >> valor;
		if (valor > 8000) { std::cout << "Mais de 8000!\n"; }
		else { std::cout << "Inseto!\n"; }
	}
	return 0;
}
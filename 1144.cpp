#include <iostream>
#include <iomanip>
#include <string>
// Entradas
int main1144() {
	int caso;
	std::cin >> caso;
	for (int i = 1; i < caso + 1; i++) {
		std::cout << i << " " << i * i << " " << i * i * i << std::endl;
		std::cout << i << " " << i * i + 1 << " " << i * i * i + 1 << std::endl;
	}
	return 0;
}
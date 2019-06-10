//1010
#include <iostream>
#include <iomanip>
#include <string>
int main1010() {
	float cod1, qdade1, valor1, cod2, qdade2, valor2;
	std::cin >> cod1 >> qdade1 >> valor1 >> cod2 >> qdade2 >> valor2;
	std::cout << "VALOR A PAGAR: R$ " << std::fixed << std::setprecision(2) << qdade1 * valor1 + qdade2 * valor2 << std::endl;
	return 0;
}
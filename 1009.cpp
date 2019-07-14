//1009
#include <iostream>
#include <iomanip>
#include <string>
int main1009() {
	std::string vendedor;
	double salarioFixo, vendas;
	std::cin >> vendedor >> salarioFixo >> vendas;
	std::cout << "TOTAL = R$ " << std::fixed << std::setprecision(2) << salarioFixo + (vendas * 0.15) << std::endl;
	return 0;
}
#include <iostream>
#include <iomanip>
int main1002() {
	double raio;
	std::cin >> raio;
	std::cout << "A=" << std::fixed << std::setprecision(4) << (raio * raio * 3.14159) << std::endl;
	return 0;
}
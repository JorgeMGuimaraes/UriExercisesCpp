//1012
#include <iostream>
#include <iomanip>
#include <string>
int main() {
	double a, b, c;
	std::cin >> a >> b >> c;
	std::cout << "TRIANGULO: " << std::fixed << std::setprecision(3) << (a * c) / 2.0 << std::endl;
	std::cout << "CIRCULO: " << std::fixed << std::setprecision(3) << 3.14159 * c * c << std::endl;
	std::cout << "TRAPEZIO: " << std::fixed << std::setprecision(3) << (a + b) * c / 2.0 << std::endl;
	std::cout << "QUADRADO: " << std::fixed << std::setprecision(3) << b * b << std::endl;
	std::cout << "RETANGULO: " << std::fixed << std::setprecision(3) << a * b << std::endl;
	return 0;
}
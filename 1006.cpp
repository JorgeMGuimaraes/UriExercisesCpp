//1006
#include <iostream>
#include <iomanip>
int main1006() {
	double a, b, c;
	std::cin >> a >> b >> c;
	std::cout << "MEDIA = " << std::fixed << std::setprecision(1) << (a * 2 + b * 3 + c * 5) / 10.0 << std::endl;
	return 0;
}
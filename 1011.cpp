//1011
#include <iostream>
#include <iomanip>
#include <string>
int main1011() {
	float r;
	std::cin >> r;
	std::cout << "VOLUME = " << std::fixed << std::setprecision(3) << (4 / 3.0) * 3.14159 * r * r * r << std::endl;
	return 0;
}
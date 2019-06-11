//1014
#include <iostream>
#include <iomanip>

int main1014() {
	float x, y;
	std::cin >> x >> y;
	std::cout << std::fixed << std::setprecision(3) << x / y << " km/l" << std::endl;
	return 0;
}
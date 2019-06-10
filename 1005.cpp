//1005
#include <iostream>
#include <iomanip>
int main1005() {
	double a, b;
	std::cin >> a >> b;
	std::cout << "MEDIA = " << std::fixed << std::setprecision(5) << (a * 3.5 + b * 7.5) / 11.0 << std::endl;
	return 0;
}

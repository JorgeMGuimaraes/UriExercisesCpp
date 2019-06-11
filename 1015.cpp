//1015
#include <iostream>
#include <iomanip>
#include <cmath>
double distancia(double x1, double x2, double y1, double y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main1015() {
	double x1, x2, y1, y2;
	std::cin >> x1 >> y1 >> x2 >> y2;
	std::cout << std::fixed << std::setprecision(4) << distancia(x1, x2, y1, y2) << std::endl;
	return 0;
}
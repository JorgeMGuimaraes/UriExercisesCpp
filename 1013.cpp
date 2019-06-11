//1013
#include <iostream>
#include <iomanip>
#include <string>

int maiorAB(int a, int b) {
	return (a + b + abs(a - b)) / 2;
}

int main1013() {
	int a, b, c;
	std::cin >> a >> b >> c;
	int resultado = maiorAB(maiorAB(a, b), c);
	std::cout << resultado << " eh o maior" << std::endl;
	return 0;
}
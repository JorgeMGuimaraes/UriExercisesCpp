// 2765
#include <iostream>
#include <string>

int main() {
	std::string line {};
	std::getline(std::cin, line);
	int pos = line.find(',');
	line.replace(pos, 1, "\n");
	std::cout << line << "\n";
	return 0;
}
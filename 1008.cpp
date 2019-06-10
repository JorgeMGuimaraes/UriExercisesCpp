//1008
#include <iostream>
#include <iomanip>
int main1008() {
	int funcionario, horasTrabalhadas;
	double valorHora;
	std::cin >> funcionario >> horasTrabalhadas >> valorHora;
	std::cout << "NUMBER = " << funcionario << std::endl << "SALARY = U$ " << std::fixed << std::setprecision(2) << horasTrabalhadas * valorHora << std::endl;
	return 0;
}
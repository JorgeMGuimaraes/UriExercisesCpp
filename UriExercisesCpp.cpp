#include <iostream>
#include <iomanip>
#include <string>
#include <set>
#include <algorithm>
// 2690
int qdadeResultados(std::set<int> vals) {
	return 6 - (int)vals.size();
}

int main() {
	std::string saidas[7] = { "azar", "azar", "azar", "terno", "quadra", "quina", "sena" };
	std::set<std::string> flavinho, sorteados;
	for (int i = 0; i < 7; i++) {
		std::string a;
		std::cin >> a;
		flavinho.insert(a);
	}
	for (int i = 0; i < 7; i++) {
		std::string a;
		std::cin >> a;
		sorteados.insert(a);
	}
	std::string c1;
	auto c = std::set_difference(flavinho.begin(), flavinho.end(), sorteados.begin(), sorteados.end(), c1);
	std::cout << c << c1;
	return 0;
}
/*
# subs
def qdadeSorteados(vals):
	return 6 - len(vals)

# processos
saidas      = ["azar", "azar", "azar", "terno", "quadra", "quina", "sena"]
flavinho    = set(map(int, input().split()))
sorteados   = set(map(int, input().split()))
print(saidas[qdadeSorteados(flavinho.difference(sorteados))])

*/
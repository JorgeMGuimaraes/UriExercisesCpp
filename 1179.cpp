//1179
#include <iostream>
#include <vector>

int main1179() {
	std::vector<int> pares {}, impares {};
	int valor {};
	for(int i = 0; i < 15; i++) {
		scanf("%d", &valor);
		if(valor % 2 == 0) {
			pares.insert(pares.end(), valor);
			if(pares.size() >= 5) {
				for(int j = 0; j < pares.size(); j++) { printf("par[%d] = %d\n", j, pares[j]); }
				pares.clear();
			}
		}
		else {
			impares.insert(impares.end(), valor);
			if(impares.size() >= 5) {
				for(int j = 0; j < impares.size(); j++) { printf("impar[%d] = %d\n", j, impares[j]); }
				impares.clear();
			}
		}
	}
	for(int j = 0; j < impares.size(); j++) { printf("impar[%d] = %d\n", j, impares[j]); }
	for(int j = 0; j < pares.size(); j++) { printf("par[%d] = %d\n", j, pares[j]); }

	return 0;
}
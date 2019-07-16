//1174
#include <iostream>

int main() {
	double valor {};
	for(int i = 0; i < 100; i++) {
		scanf("%lf", &valor);
		if(valor <= 10) { printf("A[%d] = %.1f\n", i, valor); }
	}
}
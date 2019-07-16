//1022
#include <iostream>
#include <cmath>
#include <algorithm>

int simplificar(int n, int d) {
	register int i { 2 }, mdc { 1 };
	n = std::abs(n);
	d = std::abs(d);
	while(i <= std::min(n, d)) {
		if(n % i == 0 && d % i == 0) {
			mdc *= i;
			n /= i;
			d /= i;
		}
		else { ++i; }
	}
	return mdc;
}
void imprimirTDARacional(int n, int d) {
	int divComum { simplificar(n, d) };
	printf("%d/%d = %d/%d\n", n, d, n / divComum, d / divComum);
	return;
}
void soma(int n1, int d1, int n2, int d2) {
	int numInicial { (n1 * d2) + (n2 * d1) }, denInicial { d1 * d2 };
	imprimirTDARacional(numInicial, denInicial);
	return;
}
void subtracao(int n1, int d1, int n2, int d2) {
	int numInicial { (n1 * d2) - (n2 * d1) }, denInicial { d1 * d2 };
	imprimirTDARacional(numInicial, denInicial);
	return;
}
void multiplicacao(int n1, int d1, int n2, int d2) {
	int numInicial { n1 * n2 }, denInicial { d1 * d2 };
	imprimirTDARacional(numInicial, denInicial);
	return;
}
void divisao(int n1, int d1, int n2, int d2) {
	int numInicial { n1 * d2 }, denInicial { n2 * d1 };
	imprimirTDARacional(numInicial, denInicial);
	return;
}

int main1022() {
	register int casos {}, i {};
	scanf("%d", &casos);
	for(i = 0; i < casos; i++) {
		int n1 {}, d1 {}, n2 {}, d2 {};
		char div {}, operador {};
		std::cin >> n1 >> div >> d1 >> operador >> n2 >> div >> d2;
		if(operador == '+') { soma(n1, d1, n2, d2); }
		else if(operador == '-') { subtracao(n1, d1, n2, d2); }
		else if(operador == '*') { multiplicacao(n1, d1, n2, d2); }
		else if(operador == '/') { divisao(n1, d1, n2, d2); }
	}

	return 0;
}
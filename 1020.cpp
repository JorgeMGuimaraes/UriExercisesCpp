//1020
#include <iostream>

void processaIdadeEmDias(int dias) {
	register int tempos[]		{ 365, 30, 1 }, resultados[] { 0, 0, 0 };
	register const int length	{ sizeof(tempos) / sizeof(tempos[0]) };
	register int i				{};
	for(i = 0; i < length; i++) {
		resultados[i]	= dias / tempos[i];
		dias			%= tempos[i];
	}
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", resultados[0], resultados[1], resultados[2]);
	return;
}


int main1020() {
	register int dias {};
	scanf("%d", &dias);
	processaIdadeEmDias(dias);
	return 0;
}
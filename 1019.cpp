//1019
#include <iostream>

void processaTempo(int tempo) {
	register const int tempos[]	{ 3600, 60, 1 };
	register int resultados[]	{ 0, 0, 0 };
	register int i				{};
	register const int length	{ sizeof(tempos) / sizeof(tempos[0]) };

	for(i = 0; i < length; i++) {
		resultados[i]	= tempo / tempos[i];
		tempo			%= tempos[i];
	}
	printf("%d:%d:%d\n", resultados[0], resultados[1], resultados[2]);
	return;
}

int main1019() {
	register int tempo {};
	scanf("%d", &tempo);
	processaTempo(tempo);
	return 0;
}
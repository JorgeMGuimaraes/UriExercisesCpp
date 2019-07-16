// 2547
#include <iostream>

int main2547() {
	register int visitantes {}, altMin {}, altMax {};
	while(~scanf("%d %d %d", &visitantes, &altMin, &altMax)) {
		register int i {}, total { 0 };
		for(i = 0; i < visitantes; i++) {
			register int altVis {};
			scanf("%d", &altVis);
			if(altVis >= altMin && altVis <= altMax) { total++; }
		}
		printf("%d\n", total);
	}
	return 0;
}
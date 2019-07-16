// 1172
#include <iostream>

int main1172() {
	for(int i = 0; i < 10; i++) {
		int val {};
		scanf("%d", &val);
		printf("X[%d] = %d\n", i, (val < 1) ? 1 : val);
	}
	return 0;
}
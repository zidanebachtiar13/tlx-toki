#include <stdio.h>

int main() {
	int N, index = 0;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		for (int j = 1 ; j <= i; j++) {
			printf("%d", index);
			if (index == 9) {
				index = 0;
			} else {
				index++;
			}
		}
		printf("\n");
	}
	return 0;
}

#include <stdio.h>

int main() {
	int N, A = -100000, B = 100000;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int Ni;
		scanf("%d", &Ni);
		if (A < Ni) {
			A = Ni;
		}
		if (B > Ni) {
			B = Ni;
		}
	}
	printf("%d %d", A, B);
	return 0;
}

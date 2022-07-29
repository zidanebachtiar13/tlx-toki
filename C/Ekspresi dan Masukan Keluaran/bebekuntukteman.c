#include <stdio.h>

int main() {
	int N, M, A, B;
	scanf("%d %d", &N, &M);
	A = N / M;
	B = N % M;
	printf("masing-masing %d\n", A);
	printf("bersisa %d\n", B);
	return 0;
}

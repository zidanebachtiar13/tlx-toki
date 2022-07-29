#include <stdio.h>

int main() {
	int N, hasil = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int Bi;
		scanf("%d", &Bi);
		hasil += Bi;
	}
	printf("%d\n", hasil);
}

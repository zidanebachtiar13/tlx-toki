#include <stdio.h>
#include <math.h>

int main() {
	float N;
	int F, C;
	scanf("%f", &N);
	if (N == trunc(N)) {
		F = N;
		C = N;
	} else if (N < 0) {
		F = trunc(N - 1);
		C = trunc(N);
	} else {
		F = trunc(N);
		C = trunc(N + 1);
	}
	printf("%d %d\n", F, C);
	return 0;
}

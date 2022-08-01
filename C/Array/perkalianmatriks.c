#include <stdio.h>

int main() {
	int N, M, P, A[101][101], B[101][101], C[101][101]; 
	scanf("%d %d %d", &N, &M, &P);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < P; j++) {
			scanf("%d", &B[i][j]);
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < P; j++) {
			C[i][j] = 0;
			for (int k = 0; k < M; k++) {
				C[i][j] += A[i][k] * B[k][j];
			}
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
	return 0;
}

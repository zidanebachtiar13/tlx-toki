#include<stdio.h>
int main() {
	int N;
	scanf("%d", &N);
	if(N>0) {
		if(N%2==0) {
			printf("%d\n", N);
		}
	}
	return 0;
}

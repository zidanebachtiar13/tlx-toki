#include <stdio.h>

int main() {
	int bilangan, jumlah = 0;
	while (scanf("%d", &bilangan) != EOF) {
		jumlah += bilangan;
	}
	printf("%d\n", jumlah);
	return 0;
}

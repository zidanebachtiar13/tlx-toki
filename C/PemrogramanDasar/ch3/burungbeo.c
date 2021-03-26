#include<stdio.h>
#include<string.h>
int main () {
	char kalimat[100];
	scanf("%[^\n]", kalimat);
	printf("%s\n", kalimat);
	return 0;
}

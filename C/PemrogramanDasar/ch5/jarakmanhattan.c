#include<stdio.h>
int main() {
	int x1, y1, x2, y2, x, y;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	if (x1<x2) {
		x = x2-x1;
	} else {
		x = x1-x2;
	}
	if (y1<y2) {
		y = y2-y1;
	} else {
		y = y1-y2;
	}
	printf("%d\n", x+y);
	return 0;
}

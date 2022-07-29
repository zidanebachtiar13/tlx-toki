#include <stdio.h>

int main() {
	int x1, y1, x2, y2, x, y, jarak;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	if (x1 > x2) {
		x = x1 - x2;
	} else {
		x = x2 - x1;
	}
	if (y1 > y2) {
		y = y1 - y2;
	} else {
		y = y2 - y1;
	}
	jarak = x + y;
	printf("%d", jarak);
	return 0;
}

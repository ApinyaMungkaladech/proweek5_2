#include<stdio.h>
int main() {
	int x = 1, y, z, n, m;
	printf("Enter number : ");
	scanf_s("%d", &n);
	m = 2 * n - 1;
	while (x <= n) {
		y = 1;
		while (y <= x) {
			printf(" ");
			y++;
		}
		z = 1;
		while (z <= m) {
			printf("*");
			z++;
		}
		y = 1;
		while (y <= x) {
			printf(" ");
			y++;
		}
		printf("\n");
		x++;
		m = m - 2;
	}
	m = 3;
	x = n - 1;
	while (x >= 1) {
		y = x;
		while (y >= 1) {
			printf(" ");
			y--;
		}
		z = 1;
		while (z <= m) {
			printf("*");
			z++;
		}
		y = x;
		while (y >= 1) {
			printf(" ");
			y--;
		}
		printf("\n");
		x--;
		m = m + 2;
	}
}
#include<stdio.h>
int main() {
	int i, j, x, z, b,a;
	scanf_s("%d", &b);
	for (i = 1; i <= b; i++) {
		for (j = 2; j <= i; j++) {
			printf("*");
		}
		for (x = b; x > i; x--) {
			printf(" ");
		}
		for (z = b; z >= i; z--) {
			printf(" ");
		}
		for (j = 2; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (a = 1; a <= b*2-1; a++) {
		printf("*");
	}
	printf("\n");
	for (i = 1; i <= b; i++) {
		for (j = b-1; j >= i; j--) {
			printf("*");
		}
		for (x = 1; x < i; x++) {
			printf(" ");
		}
		for (z = 1; z <= i; z++) {
			printf(" ");
		}
		for (j = b-1; j >= i; j--) {
			printf("*");
		}
		printf("\n");
	}
}
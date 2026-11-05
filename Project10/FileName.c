#include <stdio.h>
#include <math.h>
#define L1 7
#define L2 14

void main() {
	for (int l=0; l <= L2+1; l++) {
		for (int w1 = L1; w1 >= l; w1--)
			printf(" ");
		for (int v1 = 1; v1 <= 1 + l * 2 && 1 + l * 2 <= L2 + 1; v1++) {
			if (v1 == 1 || v1 == 1 + l * 2)
				printf("*");
			printf(" ");
		}
		for (int w2 = L1; w2 <= l && l; w2++)
			printf(" ");
		for (int v2 = L2 * 2 + 1; v2 >= l * 2 - 1 && l > 7; v2--) {
			if (v2 == L2 * 2 + 1 || v2 == l * 2 - 1)
				printf("*");
			printf(" ");
		}
		printf("\n");
	}
}
#include<stdio.h>
int main() {
	int line, star, blank, num;
	scanf("%d", &num);
	for (line = 0; line < num; line++) {
		for (blank = 0; blank < line; blank++) {
			printf(" ");
		}
		for (star = num-line; star >0; star--) {
			printf("*");
		}
		printf("\n");
	}
}
#include<stdio.h>
int main() {
	int line,star, blank, num;
	scanf("%d", &num);
	for (line = 0; line < num; line++) {
		for (blank = num-line-1; blank > 0; blank--) {
			printf(" ");
		}
		for (star = 0; star < line+1; star++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
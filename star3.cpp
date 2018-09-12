#include<stdio.h>
int main() {
	int line, star, num;
	scanf("%d", &num);

	for (line = 0; line < num; line++) {
		for (star = num - line; star > 0; star--) {
			printf("*");
		}
		
		printf("\n");
	}
}
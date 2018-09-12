#include<stdio.h>
int main() {
	int i = 0;
	int num;
	scanf("%d", &num);
	for (i = num; i >= 1; i--) {
		printf("%d\n", i);
	}
	return 0;
}
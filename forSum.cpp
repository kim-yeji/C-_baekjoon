#include<stdio.h>
int main() {
	int i, num;
	int sum = 0; //변수는 초기화하기전에 연산이 불가능
	scanf("%d", &num);
	for (i = 1; i <= num; i++) {
		sum += i;
	}
	printf("%d",sum);
	return 0;
}
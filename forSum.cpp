#include<stdio.h>
int main() {
	int i, num;
	int sum = 0; //������ �ʱ�ȭ�ϱ����� ������ �Ұ���
	scanf("%d", &num);
	for (i = 1; i <= num; i++) {
		sum += i;
	}
	printf("%d",sum);
	return 0;
}
#include<stdio.h>
int main() {
	char str[30] = "����ģ�� ��������";
	printf("%s\n%s", &str, &str);
	return 0;
}
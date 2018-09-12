#include<stdio.h>
int main() {
	char str[30] = "강한친구 대한육군";
	printf("%s\n%s", &str, &str);
	return 0;
}
#include<stdio.h>
#include <string.h>

int main() {
	char str[100] = "";
	int i;
	int length = 0;
	scanf("%s", str);
	length= strlen(str);
	for (i = 0; i < length; i++) {
		printf("%c", str[i]);
		if((i+1)%10==0) printf("\n");
		
	}
	return 0;
}
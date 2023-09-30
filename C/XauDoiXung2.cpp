#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main() {
	char c[100002];
	gets(c);
	printf("%d", strlen(c)-1);
	return 0;
}

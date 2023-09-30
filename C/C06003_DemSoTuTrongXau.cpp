#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int count(char s[]) {
	int res = 0;
	for (int i=0;i<strlen(s);i++)
		if (s[i]!=' ' && s[i-1]==' ')
			res++;
	res++;
	return res;
}

int main() {
	int t; scanf("%d", &t);
	getchar();
	while (t--) {
		char s[200];
		gets(s);
		printf("%d\n", count(s));
	}
	return 0;
}

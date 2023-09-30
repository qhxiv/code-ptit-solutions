#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int check(char c[]) {
	int c1, c2, c3, c4;
	c1 = c2 = c3 = c4 = 1;
	for (int i=0;i<strlen(c);i++) {
		if (c[i]=='.')
			continue;
		if (i>0) {
			if (c[i]<=c[i-1])
				c1 = 0;
			if (c[i]!=c[i-1])
				c2 = 0;
			if (i<3 && c[i]!=c[i-1])
				c3 = 0;
		}
		if (c[i]!='6' && c[i]!='8')
			c4 = 0;
	}
	if (c[4]!=c[5])
		c3 = 0;
	if (c1||c2||c3||c4)
		return 1;
	return 0;
}

int main() {
	int t; scanf("%d", &t);
	getchar();
	while (t--) {
		char c[100];
		gets(c);
		int i = 0;
		char *token = strtok(c, " ");
		while (token != NULL) {
			i++;
			if (i==2) {
				strcpy(c, token);
			}
			token = strtok(NULL, " ");
		}
		if (check(c))
			printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

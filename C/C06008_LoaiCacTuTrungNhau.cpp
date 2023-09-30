#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main() {
	char a[101], b[101][101];
	gets(a);
	char *token = strtok(a, " ");
	int cnt = 0;
	while (token != NULL) {
		strcpy(b[cnt], token);
		token = strtok(NULL, " ");
		cnt++;
	}
	int c[cnt];
	for (int i=0;i<cnt;i++)
		c[i] = 1;
	token = strtok(a, " ");
	for (int i=0;i<cnt;i++) {
		if (c[i]) {
			printf("%s ", b[i]);
			for (int j=i+1;j<cnt;j++) {
				if (strcmp(b[i], b[j])==0)
					c[j] = 0;
			}
		}
	}
	return 0;
}

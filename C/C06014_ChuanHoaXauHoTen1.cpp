#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void process(char *c) {
	char *token = strtok(c, " ");
	char res[100];
	res[0] = '\0';
	while (token != NULL) {
		token[0] = toupper(token[0]);
		for (int i=1;i<strlen(token);i++) {
			token[i] = tolower(token[i]);
		}
		strcat(res, token);
		strcat(res, " ");
		token = strtok(NULL, " ");
	}
	strcpy(c, res);
}

int main() {
	int t; scanf("%d", &t);
	getchar();
	while (t--) {
		char c[100];
		gets(c);
		process(c);
		printf("%s\n", c);
	}
	return 0;
}

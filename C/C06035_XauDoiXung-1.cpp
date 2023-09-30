#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int check(char c[]) {
	int count = 0, i = 0, j = strlen(c) - 1;
	while (i<j) {
		if (c[i]!=c[j])
			count++;
		if (count>1)
			return 0;
		i++;j--;
	}
	if (count==0 && strlen(c)%2==0)
		return 0;
	return 1;
}

int main() {
	int t; scanf("%d", &t);
	getchar();
	while (t--) {
		char c[100];
		gets(c);
		if (check(c))
			printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

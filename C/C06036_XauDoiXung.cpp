#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int check(char c[]) {
	int i=0, j=strlen(c)-1;
	while (i<j) {
		if (c[i]!=c[j])
			return 0;
		i++; j--;
	}
	return 1;
}

int main(){
	char c[100];
	gets(c);
	if (check(c))
		printf("YES");
	else printf("NO");
	return 0;
}

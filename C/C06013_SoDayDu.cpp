#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int check(char c[], int count[]) {
	if (c[0]=='0')
		return -1;
	for (int i=0;i<strlen(c);i++) {
		if (c[i]<'0' || c[i]>'9')
			return -1;
		else {
			count[c[i]-'0'] = 1;
		}
	}
	int sum = 0;
	for (int i=0;i<10;i++)
		sum += count[i];
	return sum == 10;
}

int main() {
	int t; scanf("%d", &t);
	while (t--) {
		char c[1002];
		int count[10] = {0};
		scanf("%s", c);
		if (check(c, count)==-1)
			printf("INVALID\n");
		else if (check(c, count)==0)
			printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}

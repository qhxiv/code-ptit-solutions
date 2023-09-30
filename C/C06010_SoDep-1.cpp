#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int check(char a[]) {
	int l = 0, r = strlen(a) - 1;
	while (l<r) {
		if (a[l]!=a[r])
			return 0;
		if ((int)(a[l]-'0')%2==1)
			return 0;
		l++;r--;
	}
	if (l==r && (int)(a[l]-'0')%2==1)
		return 0;
	return 1;
}

int main() {
	int t; scanf("%d", &t);
	while (t--) {
		char a[501];
		scanf("%s", a);
		if (check(a))
			printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int check(char a[]) {
	int l = 0, r = strlen(a) - 1;
	int sum = 0;
	while (l<r) {
		if (a[l]!=a[r])
			return 0;
		if (l==0 && a[l]!='8')
			return 0;
		sum += 2*(a[l]-'0');
		l++;r--;
	}
	if (l==r)
		sum += a[l]-'0';
	if (sum%10!=0)
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

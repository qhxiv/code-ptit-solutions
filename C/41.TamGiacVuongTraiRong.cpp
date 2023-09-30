#include <stdio.h>
int main() {
	int n;
	int a=1;
	scanf("%d",&n);
	for (int i=1;i<=n;i++) {
		if (a==n) for (int j=1;j<=n;j++) printf("*");
		else {
		for (int j=1;j<=a;j++) {
			if (j==a) printf("*\n");
			else if (j==1) printf("*");
			else printf(".");
		}
		}
		a++;
	}
	return 0;
}
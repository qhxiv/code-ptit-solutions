#include <stdio.h>
int main() {
	int n;
	int a=1;
	scanf("%d",&n);
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=a;j++) {
			if (j==a) printf("*\n");
			else printf("*");
		}
		a++;
	}
	return 0;
}
#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a=n-1;
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=a;j++) printf("~");
		for (int j=1;j<=i;j++) printf("*");
		printf("\n");
		a--;
	}
	return 0;
}
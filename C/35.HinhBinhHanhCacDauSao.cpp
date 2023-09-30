#include <stdio.h>
#include <math.h>
int main() {
	int n;
	scanf("%d",&n);
	int a=n-1;
	for (int i=0;i<n;i++) {
		for (int j=0;j<a;j++) printf("~");
		a--;
		for (int j=1;j<=n;j++) {
			if (j==n) printf("*\n");
			else printf("*");
		}
	}
	return 0;
}
#include <stdio.h>
#include <math.h>
int main() {
	int n;
	scanf("%d",&n);
	int a=n-1;
	for (int i=1;i<=n;i++) {
		for (int j=0;j<a;j++) printf("~");
		a--;
		for (int j=1;j<=n;j++) {
			if (i==1||i==n) {
				if (j==n) printf("*\n");
				else printf("*");
			} else if (j==1) printf("*");
			else if (j==n) printf("*\n");
			else printf(".");
		}
	}
	return 0;
}
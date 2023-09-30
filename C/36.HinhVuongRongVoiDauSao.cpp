#include <stdio.h>
#include <math.h>
int main() {
	int n;
	scanf("%d",&n);
	for (int r=1;r<=n;r++) {
		for (int c=1;c<=n;c++) {
			if (r==1||r==n) {
				if (c==n) printf("*\n");
				else printf("*");
			} else if (c==1) printf("*");
			else if (c==n) printf("*\n");
			else printf(".");
		}
	}
	return 0;
}
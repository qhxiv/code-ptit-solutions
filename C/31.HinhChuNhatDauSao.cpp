#include <stdio.h>
#include <math.h>
int main() {
	int j,i;
	scanf("%d%d",&j,&i);
	for (int r=1;r<=i;r++) {
		for (int c=1;c<=j;c++) {
			if (r==1||r==i) {
				if (c==j) printf("*\n");
				else printf("*");
			} else if (c==1) printf("*");
			else if (c==j) printf("*\n");
			else printf(" ");
		}
	}
	return 0;
}
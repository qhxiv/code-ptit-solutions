#include <stdio.h>
#include <math.h>
int main() {
	int i,j,n;
	n=0;
	scanf("%d%d",&i,&j);
	for (int r=1;r<=i;r++) {
		for (int k=0;k<n;k++) printf("~");
		n++;
		for (int c=1;c<=j;c++) {
			if (c==j) printf("*\n");
			else printf("*");
		}
	}
	return 0;
}
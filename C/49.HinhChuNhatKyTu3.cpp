#include <stdio.h>
int main() {
	int i,j,d;
	scanf("%d%d",&i,&j);
	char b='@',a[j];
	for (int c=0;c<j;c++) {
		a[c]=b;
		b++;
	}
	for (int r=1;r<=i;r++) {
		if (r<=j) {
			d=r-1;
			for (int c=1;c<=j;c++) {
				printf("%c",a[d]);
				if (d<j-1) d++;
			}
		} else {
			for (int c=1;c<=j;c++) printf("%c",a[d]);
		}
		printf("\n");
	}
	return 0;
}
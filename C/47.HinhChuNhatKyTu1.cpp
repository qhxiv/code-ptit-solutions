#include <stdio.h>
int main() {
	int i,j,d,max;
	char b;
	scanf("%d%d",&i,&j);
	if (i>j) max=i;
	else if (j>i) max=j;
	else max=j;
	char a[max];
	b='a'+max-1;
	for (int r=0;r<max;r++) {
		a[r]=b;
		b--;
	}
	for (int r=1;r<=i;r++) {
		if (r<=j) {
			d=0;
			for (int c=1;c<=j;c++) {
				printf("%c",a[d]);
				if (d<r-1) d++;
			}
		} else {
			for (int c=0;c<j;c++) {
				printf("%c",a[c]);
			}
		}
		printf("\n");
	}
	return 0;
}
#include <stdio.h>
int main() {
	int i,j,s,d;
	scanf("%d%d",&i,&j);
	char a[j],x;
	x='A';
	for (int r=0;r<j;r++) {
		a[r]=x;
		x++;
	}
	if (i<=j) {
		d=i-1;
		for (int r=1;r<=i;r++) {
			s=d;
			for (int c=1;c<=j;c++) {
				printf("%c",a[s]);
				if (s<j-1) s++;
			}
			d--;
			printf("\n");
		}
	} else {
		for (int r=1;r<=i-j;r++) {
			for (int c=1;c<=j;c++) {
				printf("%c",a[j-1]);
			}
			printf("\n");
		}
		d=j-1;
		for (int r=1;r<=j;r++) {
			s=d;
			for (int c=1;c<=j;c++) {
				printf("%c",a[s]);
				if (s<j-1) s++;
			}
			d--;
			printf("\n");
		}
	}
	return 0;
}
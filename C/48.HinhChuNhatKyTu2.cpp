#include <stdio.h>
int main() {
	int i,j;
	scanf("%d%d",&i,&j);
	char e,a[j],b[j];
	e='A';
	for (int k=0;k<=j;k++) {
		a[k]=e;
		b[j-1-k]=a[k];
		e++;
	}
	int f=0;
	for (int r=1;r<=i;r++) {
		if (r<=j) {
			for (int c=f;c<j;c++) printf("%c",a[c]);
			for (int c=j-f;c<j;c++) printf ("%c",b[c]);
			f++;
		} else {
			for (int c=0;c<j;c++) printf ("%c",b[c]);
		}
		printf("\n");
	}
	return 0;
}
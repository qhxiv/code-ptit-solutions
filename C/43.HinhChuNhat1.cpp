#include <stdio.h>
int main() {
	int i,j;
	scanf("%d%d",&i,&j);
	int a[j],b[j];
	for (int k=0;k<=j;k++) {
		a[k]=k+1;
		b[j-1-k]=a[k];
	}
	int f=0,d=1;
	for (int r=1;r<=i;r++) {
		if (r<=j) {
			for (int c=f;c<j;c++) printf("%d",a[c]);
			for (int c=j-f;c<j;c++) printf ("%d",b[c]);
			f++;
			d++;
		} else {
			printf("%d",d);
			for (int c=j-f+1;c<j;c++) printf ("%d",b[c]);
			d++;
		}
		printf("\n");
	}
	return 0;
}
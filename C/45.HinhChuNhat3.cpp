#include <stdio.h>
int main() {
	int i,j,l=-1,d=1;
	scanf("%d%d",&i,&j);
	int a[j*3];
	for (int c=0;c<j*3;c++) {
		a[c]=d;
		if (d==1||d==j) l*=(-1);
		d+=l;
	}
	d=(j-1)*2;
	for (int r=1;r<=i;r++) {
		if (r<=j) {
			for (int c=d;c<j+d;c++) {
				printf("%d",a[c]);
			}
			d--;
		} else {
			l=r;
			for (int c=d;c<j+d;c++) {
				printf("%d",l);
				l--;
			}
		}
		printf("\n");
	}
	return 0;
}
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
	d=j-1;
	for (int r=1;r<=i;r++) {
		if (r<=i-j) {
			l=i-r+1;
			for (int c=l;c>l-j;c--) {
				printf("%d",c);
			}
			l--;
		} else {
			for (int c=d;c<j+d;c++) {
				printf("%d",a[c]);
			}
			d++;
		}
		printf("\n");
	}
	return 0;
}
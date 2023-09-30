#include <stdio.h>
int main() {
	int i,f;
	scanf("%d",&i);
	char a[i*2-1],x;
	x='@';
	for (int r=0;r<i*2-1;r++) {
		a[r]=x;
		x++;
	}
	int d=0,s=i-1;
	for (int r=0;r<i;r++) {
		f=s;
		for (int c=d;c<i;c++) {
			printf("%c",a[f]);
			f++;
		}
		d++;s--;
		printf("\n");
	}
	return 0;
}
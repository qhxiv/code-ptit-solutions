#include <stdio.h>
int main() {
	int i;
	scanf("%d",&i);
	char a[i],x;
	x='A';
	for (int r=0;r<i;r++) {
		a[r]=x;
		x+=2;
	}
	int d=0;
	for (int r=0;r<i;r++) {
		for (int c=d;c<i;c++) {
			printf("%c",a[c]);
		}
		d++;
		printf("\n");
	}
	return 0;
}
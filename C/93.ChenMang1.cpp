#include <stdio.h>
int main() {
	int sa,sb,c,i,d;
	scanf("%d%d",&sa,&sb);
	int a[sa+sb],b[sa+sb];
	for (i=0;i<sa;i++) scanf("%d",&a[i]);
	for (i=0;i<sb;i++) scanf("%d",&b[i]);
	scanf("%d",&c);
	for (i=c;i<sa;i++) {
		b[sb]=a[i];
		sb++;
	}
	d=0;
	for (i=c;i<c+sb;i++) {
		a[i]=b[d];
		d++;
	}
	for (i=0;i<c+sb;i++) {
		printf("%d ",a[i]);
	}
	return 0;
}
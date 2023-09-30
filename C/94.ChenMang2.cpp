#include <stdio.h>
int main() {
	int n,sa,sb,c,i,d,j;
	scanf("%d",&n);
	for (j=1;j<=n;j++) {
		scanf("%d%d%d",&sa,&sb,&c);
		int a[sa+sb],b[sa+sb];
		for (i=0;i<sa;i++) scanf("%d",&a[i]);
		for (i=0;i<sb;i++) scanf("%d",&b[i]);
		for (i=c;i<sa;i++) {
			b[sb]=a[i];
			sb++;
		}
		d=0;
		for (i=c;i<c+sb;i++) {
			a[i]=b[d];
			d++;
		}
		printf("Test %d:\n",j);
		for (i=0;i<c+sb;i++) {
			printf("%d ",a[i]);
		}
		printf("\n");
	}
	return 0;
}
#include <stdio.h>
int main() {
	int n,sa,c,i,j,k,t;
	scanf("%d",&n);
	for (i=1;i<=n;i++) {
		scanf("%d",&sa);
		int a[sa];
		for (j=0;j<sa;j++) scanf("%d",&a[j]);
		c=1;
		for (j=1;j<sa;j++) {
			t=1;
			for (k=0;k<j;k++) {
				if (a[k]>a[j]) {
					t=0;
					break;
				}
			}
			if (t==1) c++;
		}
		printf("%d\n",c);
	}
	return 0;
}
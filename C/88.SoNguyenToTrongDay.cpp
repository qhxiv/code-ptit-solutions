#include <stdio.h>
int main() {
	int n,a,t,i,j,k;
	scanf("%d",&n);
	for (i=0;i<n;i++) {
		scanf("%d",&a);
		int b[a];
		for (j=0;j<a;j++) {
			scanf("%d",&b[j]);
			if (b[j]<=1) continue;
			else {
				t=1;
				for (k=2;k<b[j];k++) {
					if (b[j]%k==0) {
						t=0;
						break;
					}
				}
				if (t==1) printf("%d ",b[j]);
			}
		}
		printf("\n");
	}
	return 0;
}

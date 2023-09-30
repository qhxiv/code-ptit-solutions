#include <stdio.h>
int main() {
	int a,t,i,j,k,d;
	d=0;
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
				if (t==1) d++;
			}
		}
		printf("%d ",d);
	for (j=0;j<a;j++) {
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
	return 0;
}

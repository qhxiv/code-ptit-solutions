#include <stdio.h>
int main() {
	int q,n,t,d;
	scanf("%d",&q);
	for (int w=1;w<=q;w++) {
		printf("Test %d:\n",w);
		scanf("%d",&n);
		int a[n];
		for (int i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}
		for (int i=0;i<n;i++) {
			t=1;
			for (int j=0;j<i;j++) {
				if (a[i]==a[j]) {
					t=0;
					break;
				}
			}
			if (t==0) {
				continue;
			} else {
				d=0;
				for (int j=0;j<n;j++) {
					if (a[j]==a[i]) {
						d++;
					}
				}
				printf("%d xuat hien %d lan\n",a[i],d);
			}
		}
	}
	return 0;
}
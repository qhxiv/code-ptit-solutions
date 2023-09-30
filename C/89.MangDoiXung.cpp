#include <stdio.h>
int main() {
	int n,a,t;
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		scanf("%d",&a);
		int b[a];
		for (int j=0;j<a;j++) {
			scanf("%d",&b[j]);
		}
		t=1;
		for (int j=0;j<a/2;j++) {
			if (b[j]!=b[a-j-1]) {
				t=0;
				break;
			}
		}
		if (t==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
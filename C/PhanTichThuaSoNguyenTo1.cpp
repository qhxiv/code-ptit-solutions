#include <stdio.h>
int main() {
	int n,a;
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		scanf("%d",&a);
		for (int j=2;j<=a;j++) {
			while (a%j==0) {
				a/=j;
				printf("%d ",j);
			}
		}
		printf("\n");
	}
	return 0;
}
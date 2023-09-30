#include <stdio.h>
int main() {
	int n;
	long int a;
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		scanf("%ld",&a);
		if (a==1) {
			printf("NO\n");
		} else {
			int b=0;
			for (int j=1;j<=a;j++) {
				if (a%j==0&&j!=1&&j!=a) {
					printf("NO\n");
					b=1;
					break;
				}
			}
			if (b==0) {
				printf("YES\n");
			}
		}
	}
	return 0;
}
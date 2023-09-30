#include <stdio.h>
int main() {
	int n;
	long int a;
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		scanf("%ld",&a);
		int b=(a-(a/10)*10);
		while (a>=10) {
			a/=10;
		}
		if (b==a) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}
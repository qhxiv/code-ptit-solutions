#include <stdio.h>
int main() {
	int n;
	long int a;
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		scanf("%ld",&a);
		printf("%ld\n",a*a);
	}
	return 0;
}
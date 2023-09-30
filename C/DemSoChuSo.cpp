#include <stdio.h>

int main() {
	int n,a;
	scanf("%d",&n);
	a=1;
	while (n>=10) {
		n/=10;
		a++;
	}
	printf ("%d",a);
	return 0;
}
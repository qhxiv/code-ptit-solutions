#include <stdio.h>
int main() {
	long int n;
	int a=1,b=0;
	scanf("%ld",&n);
	while (a!=0) {
		if (n>=10) {
			b+=(n-(n/10)*10);
			n/=10;
		} else {
			b+=n;
			a=0;
		}
	}
	printf("%d",b);
	return 0;
}
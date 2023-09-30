#include <stdio.h>
#include <math.h>
int main() {
	long int a,b,d,n,q;
	scanf("%ld",&a);
	if (a<0) {
		return 0;
	} else {
		n=1;
		b=a;
		while (b>=10) {
			b/=10;
			n++;
		}
		q=pow(10,n-1);
		b=a/q;
		d=a-((a/10)*10);
		printf("%ld %ld",b,d);
	}
	return 0;
}
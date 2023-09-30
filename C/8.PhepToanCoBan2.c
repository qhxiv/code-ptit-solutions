#include <stdio.h>
int main() {
	long int a,b;
	scanf("%ld%ld",&a,&b);
	double n;
	n=(double)a/b;
	printf("%ld\n%ld\n%ld\n%ld\n%ld\n%.2lf",a+b,a-b,a*b,(long int)n,a%b,n);	
	return 0;
}
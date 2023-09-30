#include <stdio.h>
long int UCLN(long int a,long int b) {
	if (b==0) return a;
	return(UCLN(b,a%b));
}
int main() {
	long int a,b;
	scanf("%ld%ld",&a,&b);
	printf("%ld\n",UCLN(a,b));
	printf("%ld",a*b/UCLN(a,b));
	return 0;
}
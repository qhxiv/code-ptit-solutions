#include <stdio.h>
#include <math.h>
int main() {
	long int a,d,c,l,e;
	scanf("%ld",&a);
	e=a;
	c=0;l=0;
	while (a>=10) {
		d=a-a/10*10;
		a/=10;
		if (d%2==0) {
			c++;
		} else {
			l++;
		}
	}
	if (a%2==0) {
		c++;
	} else {
		l++;
	}
	printf ("%ld %ld",l,c);
	return 0;
}
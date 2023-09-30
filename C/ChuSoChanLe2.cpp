#include <stdio.h>
#include <math.h>
int main() {
	int n,c,l;
	long int a,d,e;
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
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
		printf ("%d %d\n",l,c);
	}
	return 0;
}
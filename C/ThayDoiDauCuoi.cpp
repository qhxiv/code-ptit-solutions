#include <stdio.h>
#include <math.h>
int main() {
	int a,b,c,d,n,q;
	scanf("%d",&a);
	if (a<10) {
		printf("%d",a);
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
		c=a-(b*q)-d;
		printf("%d",c+b+d*q);
	}
	return 0;
}
#include <stdio.h>
#include <math.h>
int main() {
	int a,s,d,b,c;
	scanf("%d",&a);
	c=a;
	s=0;
	while (a>=10) {
		b=1;
		d=a-a/10*10;
		a/=10;
		for (int i=1;i<=d;i++) {
			b*=i;
		}
		s+=b;
	}
	b=1;
	for (int i=1;i<=a;i++) {
			b*=i;
	}
	s+=b;
	if (c==s) {
		printf ("%d",1);
	} else {
		printf("%d",0);
	}
	return 0;
}
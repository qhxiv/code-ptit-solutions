#include <stdio.h>
#include <math.h>
int main() {
	double a,b,c,d;
	scanf("%lf%lf%lf",&a,&b,&c);
	d=(b*b)-(4*a*c);
	if (d<0) {
		printf("NO");
	} else if (d==0) {
		printf("%.2lf",-b/(2*a));
	} else if (d>0) {
		double x1,x2;
		x1=(-b + sqrt(d))/(2*a);
		x2=(-b - sqrt(d))/(2*a);
		printf("%.2lf %.2lf",x1,x2);
	}
	return 0;
}
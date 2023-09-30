#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	double a;
	for(int i=0;i<n;i++) {
		scanf("%lf",&a);
		printf("%.15lf\n",1/a);
	}
	return 0;
}
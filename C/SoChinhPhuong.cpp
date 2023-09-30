#include <stdio.h>
#include <math.h>
int main() {
	int n;
	scanf("%d",&n);
	double a;
	for (int i=0;i<n;i++) {
		scanf("%lf",&a);
		if (sqrt(a)==(int)sqrt(a)) {
			printf("YES");
		} else {
			printf("NO");
		}
	}
	return 0;
}
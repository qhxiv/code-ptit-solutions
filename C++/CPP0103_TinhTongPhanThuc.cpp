#include <stdio.h>

int main() {
	double n, s = 0;
	scanf("%lf", &n);
	for (double i=1; i<=n; i++) {
		s += 1/i;
	}
	printf("%0.4lf",s);
	return 0;
}
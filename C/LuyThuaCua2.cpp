#include <stdio.h>
int main() {
	long int n,a;
	a=1;
	scanf("%ld",&n);
	if (n%2!=0) {
		printf("false");
		return 0;
	} else {
		for (int i=1;i<=31;i++) {
			a*=2;
			if (a==n) {
				printf("true");
				return 0;
			} 			
		}
	}
	printf("false");
	return 0;
}

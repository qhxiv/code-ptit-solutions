#include <stdio.h>
int main() {
	int a,t;
	scanf("%d",&a);
	t=1;
	while (a>=10) {
		t*=(a-(a/10)*10);
		a/=10;
	}
	printf("%d",t);
	return 0;
}
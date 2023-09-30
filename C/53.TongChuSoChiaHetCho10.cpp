#include <stdio.h>
void test(long int a) {
	long int s=0;
	while (a>=10) {
		s+=a-(a/10)*10;
		a/=10;
	}
	s+=a;
	if (s%10==0) printf("YES\n");
	else printf("NO\n");
}
int main() {
	int n;
	long int a;
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		scanf("%ld",&a);
		test(a);
	}
	return 0;
}
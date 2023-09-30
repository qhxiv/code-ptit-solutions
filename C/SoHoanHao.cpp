#include <stdio.h>
#include <math.h>
int main() {
	int a,s;
	scanf("%d",&a);
	s=0;
	for (int i=1;i<a;i++) {
		if (a%i==0) {
			s+=i;
		}
	}
	if (a==s) {
		printf ("%d",1);
	} else {
		printf("%d",0);
	}
	return 0;
}
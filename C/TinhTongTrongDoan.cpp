#include <stdio.h>
int main() {
	int a,b,s;
	scanf("%d%d",&a,&b);
	s=0;
	if (a<b) {
		for (int i=a;i<=b;i++) {
			s+=i;
		}
	} else if (a>b) {
		for (int i=b;i<=a;i++) {
			s+=i;
		}
	} else {
		printf("%d",a);
		return 0;
	}
	if (a!=b) printf("%d",s);
	return 0;
}
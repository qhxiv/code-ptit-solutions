#include <stdio.h>
int main() {
	int d,s,n;
	long long int a,c;
	scanf("%d",&n);
	for (int j=0;j<n;j++) {
		scanf("%lld",&a);
		c=a;
		s=1;
		while (c>=10) {
			d=c-c/10*10;
			c/=10;
			s++;
		}
		int b[s];
		int i=0;
		while (a>=10) {
			d=a-a/10*10;
			a/=10;
			b[i]=d;
			i++;
		}
		b[i]=a;
		int t=1;
		for (i=0;i<s-1;i++) {
			if (b[i]<b[i+1]) {
				t=0;
				printf("NO\n");
				break;
			}
		}
		if (t==1) printf("YES\n");
	}
	return 0;
}
#include <stdio.h>
#include <math.h>
int main() {
	int n;
	scanf("%d",&n);
	int a=1;
	printf("%d\n",2);
	int i=3;
	while (a<n) {
		int t=1;
		for (int j=3;j<=sqrt(i);j++) {
			if (i%j==0) {
				t=0;
				i;
			}
		}
		if (t==1){
			printf("%d\n",i);
			a++;
		}
		i+=2;
	}
	return 0;
}
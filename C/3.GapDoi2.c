#include <stdio.h>
int main() {
	int a;
	scanf("%d",&a);
	int b;
	for (int i=1;i<=a;i++) {
		scanf("%d",&b);
		printf("%d\n",2*b);
	}
	return 0;
}
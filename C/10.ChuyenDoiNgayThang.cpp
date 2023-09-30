#include <stdio.h>
int main() {
	int a,na,t,ng;
	scanf("%d",&a);
	na=a/365;
	t=(a%365)/7;
	ng=(a%365)%7;
	printf("%d %d %d",na,t,ng);
	return 0;
}
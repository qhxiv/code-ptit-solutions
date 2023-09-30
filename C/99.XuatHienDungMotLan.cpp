#include <stdio.h>
int main() {
	int n,i,j,t1,t2,t3,k,d;
	scanf("%d",&n);
	int a[n];
	int b[n];
	k=0;
	for (j=0;j<n;j++) scanf("%d",&a[j]);
	for (j=n-1;j>=0;j--) {
		t1=1;t2=0;
		for (i=j-1;i>=0;i--) {
			if (a[j]==a[i]) {
				t1=0;
				break;
			}
		}
		for (i=j+1;i<n;i++) {
			if (a[j]==a[i]) {
				t2=1;
				break;
			}
		}
		if (t1==0&&t2==0){
			b[k]=a[j];
			k++;
		}
	}
	d=0;
	for (i=0;i<n;i++){
		t3=1;
		for (j=0;j<k;j++) {
			if (a[i]==b[j]){
				t3=0;
			}
		}
		if (t3==1){
			d++;	
		}
	}
	printf("%d\n",d);
	for (i=0;i<n;i++){
		t3=1;
		for (j=0;j<k;j++) {
			if (a[i]==b[j]){
				t3=0;
			}
		}
		if (t3==1){
			printf("%d ",a[i]);	
		}
	}
	return 0;
}
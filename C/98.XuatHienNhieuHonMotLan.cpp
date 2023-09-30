#include <stdio.h>
int main() {
	int n,j,t1,i,t2,k,t3;
	scanf("%d",&n);
	int a[n];
	for (j=0;j<n;j++) scanf("%d",&a[j]);
	k=0;
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
		if (t1==1&&t2==1){
			k++;
		}
	}
	int b[k];
	k=0;
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
		if (t1==1&&t2==1){
			b[k]=a[j];
			k++;
		}
	}
	t3=0;
	for (i=0;i<n;i++) {
		for (j=0;j<k;j++) {
			if (a[i]==b[j]){
				printf("%d ",a[i]);
				b[j]=-1;
				t3=1;
			}
		}
	}
	if (t3==0) printf("%d",0);
	return 0;
}
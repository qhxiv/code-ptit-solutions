#include <iostream>
#include <stdlib.h>

int cmp (const void *a, const void *b) {
	return *(int*)b - *(int*)a;
}

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for (int i=0;i<n;i++)
			cin >> a[i];
		qsort(a, n, sizeof(int), cmp);
		for (int i=0;i<k;i++)
			cout << a[i] << " ";
		cout << endl;
	}
    return 0;
}

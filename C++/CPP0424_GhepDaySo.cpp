#include <bits/stdc++.h>

using namespace std;

int cmp(const void *a, const void *b) {
	return *(int*)a - *(int*)b;
}

int main(){
    int t; cin >> t;
    while (t--) {
    	int k, n;
    	cin >> k >> n;
    	int a[k*n];
    	for (int i=0;i<k*n;i++) {
    		cin >> a[i];
		}
		qsort(a, k*n, sizeof(int), cmp);
		for (int i=0;i<k*n;i++) {
    		cout << a[i] << " ";
		}
		cout << endl;
	}
    return 0;
}

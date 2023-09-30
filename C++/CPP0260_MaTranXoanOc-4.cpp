#include <bits/stdc++.h>

using namespace std;

int cmp(const void *a, const void *b) {
	int *x = (int*)a;
	int *y = (int*)b;
	return *x-*y;
}

int main() {
		int n;
		cin >> n;
		int a[n][n], b[n*n];
		for (int i=0;i<n*n;i++)
			cin >> b[i];
		qsort(b, n*n, sizeof(int), cmp);
		int cnt=0, h1=0, h2=n-1, c1=0, c2=n-1;
		while (h1<=h2 && c1<=c2) {
				for (int i=c1;i<=c2;i++) {
					a[h1][i] = b[cnt];
					cnt++;
				}
				for (int i=h1+1;i<=h2;i++) {
					a[i][c2] = b[cnt];
					cnt++;;
				}
				for (int i=c2-1;i>=c1;i--) {
					a[h2][i] = b[cnt];
					cnt++;;
				}
				for (int i=h2-1;i>h1;i--) {
					a[i][c1] = b[cnt];
					cnt++;;
				}
				h1++; h2--; c1++; c2--;
			}
		for (int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	return 0;
}


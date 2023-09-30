#include <bits/stdc++.h>
#define ll long long

using namespace std;

//Lomuto's partition
int partition1(int a[], int l, int r) {
	int i = l-1;
	for (int j=l;j<=r;j++) {
		if (a[j]<=a[r]) {
			i++;
			swap(a[i], a[j]);
		}
	}
	return i;
}

//Hoare's partition
int partition2(int a[], int l, int r) {
	int p = a[l];
	int i = l-1, j = r+1;
	while (1) {
		do {
			i++;
		} while (a[i]<p);
		do {
			j--;
		} while (a[j]>p);
		if (i>=j)
			return j;
		swap(a[i], a[j]);
	}
}

void qSort(int a[], int l, int r) {
	if (l>=r) return;
	int p = partition1(a, l, r);
	qSort(a, l, p);
	qSort(a, p+1, r);
}

int main() {
	int n; cin >> n;
	int a[n];
	for (int i=0;i<n;i++)
		cin >> a[i];
	qSort(a, 0, n);
	for (int x : a)
		cout << x << ' ';
	return 0;
}
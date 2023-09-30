#include <iostream>
#include <math.h>
using namespace std;

int gttd(int n) {
	if (n<0)
		return -n;
	return n;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i=0; i<n; i++)
			cin >> a[i];
		int min = abs(a[0]-a[1]);
		for (int i=0; i<n-1; i++) {
			for (int j=i+1; j<n; j++) {
				if (min > abs(a[i]-a[j]))
					min = abs(a[i] - a[j]);
			}
		}
		cout << min << endl;
	}
	return 0;
}
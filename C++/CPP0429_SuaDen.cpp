#include <iostream>

using namespace std;

int main() {
	int n, k, b;
	cin >> n >> k >> b;
	int a[n];
	for (int i=0;i<n;i++)
		a[i] = 1;
	for (int i=0;i<b;i++) {
		int tmp;
		cin >> tmp;
		a[tmp-1] = 0;
	}
	int sum = 0;
	for (int i=0;i<k;i++) {
		sum+=a[i];
	}
	int max = sum;
	for (int i=k;i<n;i++) {
		sum -= a[i-k];
		sum += a[i];
		if (max < sum)
			max = sum;
	}
	cout << k - max;
	return 0;
}


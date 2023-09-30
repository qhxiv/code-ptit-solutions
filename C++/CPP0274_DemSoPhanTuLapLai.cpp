#include <iostream>

using namespace std;

int count[1000001];

int main() {
	int t;
	cin >> t;
	while (t--) {
		for (int i=0; i<=1000000; i++)
			count[i] = 0;
		int n, ans = 0;
		cin >> n;
		int a[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
			count[a[i]]++;
		}
		for (int i=0; i<=1000000; i++) {
			if (count[i]>=2)
				ans += count[i];
		}
		cout << ans << endl;
	}
	return 0;
}

#include <iostream>
#define ll long long

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, count = 0;
		cin >> n;
		ll a[n];
		ll tmp;
		for (int i=0; i<n; i++) {
			cin >> tmp;
			if (tmp==0)
				count++;
			else cout << tmp << " ";
		}
		for (int i=0; i<count; i++)
			cout << 0 << " ";
		cout << endl;
	}
	return 0;
}

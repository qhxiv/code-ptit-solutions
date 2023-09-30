#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, tmp, max = -1;
		cin >> n;
		for (int i=0; i<n; i++) {
			cin >> tmp;
			if (tmp>max)
				max = tmp;
		}
		cout << max << endl;
	}
	return 0;
}

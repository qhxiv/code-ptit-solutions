#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		int b[3]={0};
		for (int i=0; i<n; i++) {
			cin >> a[i];
			b[a[i]]++;
		}
		int count = 0;
		while (count<3) {
			while (b[count]!=0) {
				cout << count << " ";
				b[count]--;
			}
			if (b[count]==0)
				count++;
		}
		cout << endl;
	}
	return 0;
}
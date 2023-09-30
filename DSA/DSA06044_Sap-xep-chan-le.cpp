#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int n; cin >> n;
	vector<int> odd, even;
	for (int i=1;i<=n;i++) {
		int x; cin >> x;
		if (i%2==0)
			even.push_back(x);
		else odd.push_back(x);
	}
	sort(odd.begin(), odd.end());
	sort(even.begin(), even.end(), greater<int>());
	int i = 0, j = 0;
	n = odd.size();
	int m = even.size();
	int tmp = 1;
	while (i<n && j<m) {
		if (tmp==1) {
			cout << odd[i] << ' ';
			i++;
		} else {
			cout << even[j] << ' ';
			j++;
		}
		tmp *= -1;
	}
	if (i<n)
		cout << odd[n-1] << ' ';
	else if (j<m)
		cout << even[m-1] << ' ';
	return 0;
}
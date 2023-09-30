#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n];
		for (int &x : a) cin >> x;
		int rec, cnt;
		cnt = 1;
		rec = -1;
		int check = -1;
		for (int i=0;i<n-1;i++) {
			if (check==-1 && a[i]<a[i+1])
				check = 1;
			else if (check==1 && a[i]>a[i+1])
				check = 0;
			else if (check==0 && a[i]<=a[i+1])
				check = -1;
			if (a[i]<a[i+1] && check==1)
				cnt++;
			else if (a[i]>a[i+1] && check==0)
				cnt++;
			else if (check==-1) {
				rec = max(cnt, rec);
				if (a[i]<a[i+1])
					cnt = 2;
				else cnt = 1;
			}
		}
		rec = max(cnt, rec);
		cout << rec << endl;
	}
	return 0;
}
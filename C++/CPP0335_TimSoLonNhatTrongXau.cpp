#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		int tmp = 0, sum = 0, res = -1e9;
		for (int i=0;i<s.size();i++) {
			if (s[i]>='0'&&s[i]<='9')
				tmp = tmp*10 + s[i] - '0';
			else {
				res = max(res, tmp);
				tmp = 0;
			}
		}
		if (s[s.size()-1]>='0'&&s[s.size()-1]<='9')
			res = max(res, tmp);
		cout << res << endl;
	}
	return 0;
}

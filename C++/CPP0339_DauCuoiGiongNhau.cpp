#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; cin >> t;
	cin.ignore();
	while (t--) {
		string s;
		cin >> s;
		int res = 0;
		for (int i=0;i<s.size();i++)
			for (int j=i;j<s.size();j++)
				if (s[i]==s[j])
					res++;
		cout << res << endl;
	}
	return 0;
}

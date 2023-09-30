#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		string s;
		int k, p = 0, o = 0;
		int count[128] = {0};
		cin >> s;
		cin >> k;
		for (int i=0; i<s.size(); i++)
			count[s[i]]++;
		for (int i='a'; i<='z'; i++)
			if (count[i]>1)
				p += count[i] - 1;
			else if (count[i]==0)
				o++;
		if (p>=o && k>=o)
			cout << 1;
		else cout << 0;
		cout << endl;
	}
	return 0;
}
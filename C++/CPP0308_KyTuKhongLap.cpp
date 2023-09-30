#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int count[128] = {0};
		string s;
		cin >> s;
		for (int i=0; i<s.size(); i++)
			count[s[i]]++;
		for (int i=0; i<s.size(); i++)
			if (count[s[i]]==1)
				cout << s[i];
		cout << endl;
	}
	return 0;
}
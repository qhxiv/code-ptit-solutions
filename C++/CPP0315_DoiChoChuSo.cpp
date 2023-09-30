#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		int i = s.size()-2;
		while (i>=0&&s[i]<=s[i+1])
			i--;
		if (i==-1) {
			cout << "-1\n";
			continue;
		}
		int j = s.size()-1;
		while ((s[i]<=s[j])||(s[i]>s[j]&&s[j]==s[j-1]))
			j--;
		swap(s[i], s[j]);
		cout << s << endl;
	}
	return 0;
}

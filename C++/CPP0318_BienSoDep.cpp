#include <bits/stdc++.h>

using namespace std;

string check(string q) {
	string s = q.substr(5, 6);
	s.erase(3, 1);
	bool c1, c2, c3, c4;
	c1 = c2 = c3 = c4 = 1;
	for (int i=0;i<s.size();i++) {
		if (s[i]!='6'&&s[i]!='8')
			c4 = 0;
		if (i>0) {
			if (s[i]<=s[i-1])
				c1 = 0;
			if (s[i]!=s[i-1])
				c2 = 0;
			if (i<=2&&s[i]!=s[i-1])
				c3 = 0;
			if (i==s.size()-1&&s[i]!=s[i-1])
				c3 = 0;
		}
	}
	if (c1||c2||c3||c4)
		return "YES";
	return "NO";
}

int main(){
    int t; cin >> t;
    while (t--) {
    	string s; cin >> s;
    	cout << check(s) << endl;
	}
    return 0;
}


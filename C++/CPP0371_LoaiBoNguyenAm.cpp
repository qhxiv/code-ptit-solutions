#include <bits/stdc++.h>

using namespace std;

void lower(char &c) {
	if (c>='A' && c<='Z')
		c += ('a' - 'A');
}

bool check(char c) {
	if (c=='u' || c=='e' || c=='o' || c=='a' || c=='i' || c=='y')
		return 1;
	return 0;
}

int main() {
	string s;
	cin >> s;
	for (int i=0; i<s.size(); i++) {
		lower(s[i]);
		if (check(s[i]))
			continue;
		cout << ".";
		cout << s[i];
	}
	return 0;
}

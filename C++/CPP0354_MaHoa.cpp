#include <iostream>

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
			if (count[s[i]]!=0) {
				cout << s[i] << count[s[i]];
				count[s[i]] = 0;
			}
		cout << endl;
	}
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	set<string> s;
	cin.ignore();
	for (int i=0;i<n;i++) {
		string tmp;
		getline(cin, tmp);
		s.insert(tmp);
	}
	cout << s.size();
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	string a, b;
	cin >> a >> b;
	for (char &x : a)
		if (x=='6')
			x = '5';
	for (char &x : b)
		if (x=='6')
			x = '5';
	cout << stoi(a) + stoi(b) << ' ';
	for (char &x : a)
		if (x=='5')
			x = '6';
	for (char &x : b)
		if (x=='5')
			x = '6';
	cout << stoi(a) + stoi(b);
	return 0;
}
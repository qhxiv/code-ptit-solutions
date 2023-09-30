#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	char c;
	while (t--) {
		cin >> c;
		if (c>='a' && c<='z')
			cout << (char)(c-32) << endl;
		else cout << (char)(c+32) << endl;
	}
	return 0;
}
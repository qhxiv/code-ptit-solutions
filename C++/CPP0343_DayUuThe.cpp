#include <iostream>

using namespace std;

string check(int n, int c, int l) {
	if ((n%2==0 && c>l) || (n%2!=0 && l>c))
		return "YES";
	return "NO";
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int x, c = 0, l = 0, n = 0;
		char d = ' ';
		while (d!='\n' && d!='\0') {
			cin >> x;
			if (x%2==0)
				c++;
			else l++;
			n++;
			d = getchar();
		}
		cout << check(n, c, l) << endl;
	}
	return 0;
}

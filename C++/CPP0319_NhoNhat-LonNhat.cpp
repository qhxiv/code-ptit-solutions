#include <bits/stdc++.h>

using namespace std;

int main() {
	int m, s;
	cin >> m >> s;
	if (s>9*m || (s==0 && m>1)) {
		cout << "-1 -1";
		return 0;
	}
	int l[m]={0}, b[m]={0};
	int tmp = s;
	for (int i=0;i<m;i++) {
		if (s>=9) {
			l[i] = 9;
			s -= 9;
		} else if (s!=0) {
			l[i]=s;
			break;
		}
	}
	tmp--;
	for (int i=m-1;i>=0;i--) {
		if (tmp>=9) {
			b[i] = 9;
			tmp -= 9;
		} else if (tmp!=0) {
			b[i] = tmp;
			break;
		}
	}
	b[0]++;
	for (int i=0;i<m;i++) {
		cout << b[i];
	}
	cout << " ";
	for (int i=0;i<m;i++) {
		cout << l[i];
	}
	return 0;
}

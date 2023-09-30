#include <bits/stdc++.h>

using namespace std;

int a[100];
vector<string> res;

void add() {
	if (((a[1]==0 && a[2]==0) || (a[3]==0 && a[4]==0) || a[3]==2))
		return;
	string x = "";
	for (int i=1;i<=7;i++) {	
		if (i==3)
			x = x + '/';
		else if (i==5)
			x = x + "/2";
		x = x + to_string(a[i]);
	}
	res.push_back(x);
}

void Try(int i) {
	for (int j=0;j<=2;j+=2) {
		a[i] = j;
		if (i==7)
			add();
		else Try(i+1);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	Try(1);
	sort(res.begin(), res.end());
	for (string x : res)
		cout << x << endl;
	return 0;
}
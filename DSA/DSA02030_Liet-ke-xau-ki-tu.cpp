#include <bits/stdc++.h>

using namespace std;

char c ,a[100];
int k;

void result() {
	for (int i=1;i<=k;i++)
		cout << a[i];
	cout << endl;
}

void Try(int i) {
	for (char j='A';j<=c;j++) {
		a[i] = j;
		if (a[i]<a[i-1])
			continue;
		if (i==k)
			result();
		else Try(i+1);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> c >> k;
	Try(1);
	return 0;
}
#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n][3];
	int c1, c0, cnt = 0;
	for (int i=0;i<n;i++) {
		c1 = 0, c0 = 0;
		for (int j=0;j<3;j++) {
			cin >> a[i][j];
			if (a[i][j]==1) c1++;
			else if (a[i][j]==0) c0++;
		}
		if (c1>c0) cnt++;
	}
	cout << cnt;
    return 0;
}

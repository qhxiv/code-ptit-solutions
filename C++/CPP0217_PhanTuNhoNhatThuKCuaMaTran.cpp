#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--) {
		int count[10001] = {0};
		int n, k;
		cin >> n >> k;
		int a[n][n];
		for (int i=0;i<n;i++)
			for (int j=0;j<n;j++) {
				cin >> a[i][j];
				count[a[i][j]]++;
			}
		for (int i=0;i<=10000;i++) {
			while (count[i]!=0) {
				count[i]--;
				k--;
				if (k==0) {
					cout << i << endl;
					break;
				}
			}
		}
	}
    return 0;
}

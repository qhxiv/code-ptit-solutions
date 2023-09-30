#include <iostream>
#define ll long long

using namespace std;

int main(){
	int t;
	cin >> t;
	int m = 1e9+7;
	while (t--) {
		int n, x;
		cin >> n >> x;
		int p[n];
		for (int i=n-1;i>=0;i--) cin >> p[i];
		ll res = 0, lt = 1;
		for (int i=0;i<n;i++) {
			res += p[i]*lt;
			res %= m;
			lt *= x;
			lt %= m;
		}
		cout << res << endl;
	}
    return 0;
}

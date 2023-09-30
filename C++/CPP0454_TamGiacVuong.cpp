#include <iostream>
#define ll long long

using namespace std;

void sort(ll a[], int n) {
	for (int i=0; i<n-1; i++) {
		int m = i;
		for (int j=i+1; j<n; j++) {
			if (a[m]>a[j]) m = j;
		}
		ll tmp = a[i];
		a[i] = a[m];
		a[m] = tmp;
	}
}

string check(ll a[], int n) {
	for (int i=n-1; i>=2; i--) {
		int l = 0, r = i-1;
		while (l<r) {
			if (a[l] + a[r] == a[i])
				return "YES";
			else if (a[l] + a[r] > a[i])
				r--;
			else l++;
		}
	}
	return "NO";
}

int main(){
    int t;
    cin >> t;
    while (t--) {
    	int n;
    	cin >> n;
    	ll a[n];
    	for (int i=0; i<n; i++) {
    		cin >> a[i];
    		a[i] *= a[i];
		}
		sort(a, n);
		cout << check(a, n) << endl;
	}
    return 0;
}

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        ll a[n];
        for (ll &x : a) cin >> x;
        ll rec = 0, m = -1e9;
        for (int i=0;i<n;i++) {
            rec += a[i];
            m = max(m, rec);
            if (rec<0) rec = 0;
        }
        cout << m << endl;
    }
    return 0;
}
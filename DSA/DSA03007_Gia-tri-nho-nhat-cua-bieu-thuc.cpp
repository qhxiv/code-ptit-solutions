#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool cmp(ll a, ll b) {
    return a>b; 
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        ll a[n], b[n];
        for (int i=0;i<n;i++) cin >> a[i];
        for (int i=0;i<n;i++) cin >> b[i];
        sort(a, a+n);
        sort(b, b+n, cmp);
        ll res = 0;
        for (int i=0;i<n;i++) res += a[i]*b[i];
        cout << res << endl;
    }
    return 0;
}
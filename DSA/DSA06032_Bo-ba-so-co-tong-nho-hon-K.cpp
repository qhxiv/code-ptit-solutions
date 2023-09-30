#include <bits/stdc++.h>
#define ll long long

using namespace std;

int last_pos(ll a[], int l, int r, ll x) {
    int res = -1;
    while (l<=r) {
        int m = (l+r)/2;
        if (a[m]<x) {
            res = m;
            l = m + 1;
        } else r = m - 1;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; ll k;
        cin >> n >> k;
        ll a[n], cnt = 0;
        for (ll &x : a) cin >> x;
        sort(a, a+n);
        for (int i=0;i<=n-3;i++) {
            if (a[i] > k) break;
            for (int j=i+1;j<=n-2;j++) {
                int r = last_pos(a, j+1, n-1, k-a[i]-a[j]);
                if (r!=-1) cnt += r - j;
                else break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
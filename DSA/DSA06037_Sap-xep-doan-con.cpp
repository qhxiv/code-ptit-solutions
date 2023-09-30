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
        multiset<ll> s(a, a+n);
        ll m = -1e18;
        vector<int> res;
        for (int i=0;i<=n-2;i++) {
            m = max(m, a[i]);
            s.erase(s.find(a[i]));
            if (m<=(*s.begin())) res.push_back(i);
        }
        cout << res.size() << endl;
        for (int x : res) cout << x+1 << ' ';
        cout << endl;
    }
    return 0;
}
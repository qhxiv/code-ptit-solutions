#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n], dp[n], m = -1;
        for (int &x : a) cin >> x;
        fill(dp, dp+n, 1);
        for (int i=1;i<n;i++) {
            for (int j=0;j<i;j++) {
                if (a[j]<=a[i])
                    dp[i] = max(dp[j] + 1, dp[i]);
            }
            m = max(dp[i], m);
        }
        cout << n - m << endl;
    }
    return 0;
}
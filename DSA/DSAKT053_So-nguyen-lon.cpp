#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        int n = x.size(), m = y.size();
        x = '!' + x;
        y = '!' + y;
        int dp[n+1][m+1] = {};
        for (int i=1;i<=n;i++) {
            for (int j=1;j<=m;j++) {
                if (x[i]==y[j])
                    dp[i][j] = dp[i-1][j-1] + 1;
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        cout << dp[n][m] << endl;
    }
}
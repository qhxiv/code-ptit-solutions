#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        if (s[0]=='0') {
            cout << 0 << endl;
            continue;
        }
        int n = s.size();
        s = '!' + s;
        int dp[n+1] = {0};
        dp[0] = dp[1] = 1;
        bool ok = 1;
        for (int i=2;i<=n;i++) {
            dp[i] = dp[i-1];
            if (s[i]=='0') {
                if (s[i-1]=='1' or s[i-1]=='2') continue;
                else {
                    ok = 0;
                    break;
                }
            } else {
                if (s[i-1]=='0' or s[i+1]=='0') continue;
                string tmp = "";
                tmp = tmp + s[i-1] + s[i];
                if (stoi(tmp)<=26) dp[i] += dp[i-2];
            }
        }
        if (ok) cout << dp[n];
        else cout << 0;
        cout << endl;
    }
}
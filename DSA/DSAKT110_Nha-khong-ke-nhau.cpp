#include <bits/stdc++.h>
#define ll long long

using namespace std;

int solve(vector<int> a) {
    int n = a.size();
    if (n==1) return a[0];
    int prev2 = a[0], prev1 = max(a[0], a[1]);
    if (n==2) return prev1;
    int current;
    for (int i=2;i<n;i++) {
        current = max(a[i] + prev2, prev1);
        prev2 = prev1;
        prev1 = current;
    }
    return current;
}  

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a;
        for (int i=0;i<n;i++) {
            int x; cin >> x;
            a.push_back(x);
        }
        cout << solve(a) << endl;
    }
}
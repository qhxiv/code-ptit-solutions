#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n; cin >> n;
    set<pair<int, int>> se;
    string s;
    cin.ignore();
    for (int i=1;i<=n;i++) {
        getline(cin, s);
        stringstream ss(s);
        pair<int, int> tmp;
        while (ss >> s) {
            tmp.first = min(i, stoi(s));
            tmp.second = max(i, stoi(s));
            se.insert(tmp);
        }
    }
    vector<pair<int, int>> v(se.begin(), se.end());
    sort(v.begin(), v.end(), cmp);
    for (auto x : v) cout << x.first << ' ' << x.second << endl;
    return 0;
}
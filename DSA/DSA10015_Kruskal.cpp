#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m, parent[110], sz[110];
vector<tuple<int, int, int>> edges;

void make_set() {
    for (int i=1;i<=n;i++) {
        parent[i] = i;
        sz[i] = 1;
    }
}

int find(int v) {
    if (parent[v]==v) return v;
    else return parent[v] = find(parent[v]);
}

void Union(int a, int b) {
    a = find(a);
    b = find(b);
    if (a!=b) {
        if (sz[a]<sz[b]) swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
    }
}

bool cmp(tuple<int, int, int> a, tuple<int, int, int> b) {
    return get<2>(a) < get<2>(b);
}

void Kruskal() {
    vector<pair<int, int>> mst;
    int d = 0;
    make_set();
    sort(edges.begin(), edges.end(), cmp);
    while (mst.size()<n-1 and !edges.empty()) {
        tuple<int, int, int> tmp = *edges.begin();
        edges.erase(edges.begin(), edges.begin()+1);
        int a = get<0>(tmp);
        int b = get<1>(tmp);
        if (find(a)!=find(b)) {
            Union(a, b);
            mst.push_back({a, b});
            d += get<2>(tmp);
        }
    }
    if (mst.size()<n-1) cout << "Do thi khong lien thong.";
    else cout << d;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        cin >> n >> m;
        edges.clear();
        while (m--) {
            int x, y, z;
            cin >> x >> y >> z;
            edges.push_back(make_tuple(x, y, z));
        }
        Kruskal();
        cout << endl;
    }
}
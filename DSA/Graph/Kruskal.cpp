/*Input :
13
0 2 1 3 0 0 0 0 0 0 0 0 0
2 0 2 0 0 5 5 0 0 0 0 0 0
1 2 0 4 0 5 0 0 0 0 0 0 0
3 0 4 0 5 5 0 0 0 0 0 0 0
0 0 0 5 0 6 0 0 0 6 0 0 0
0 5 5 5 6 0 6 6 6 6 0 0 0
0 5 0 0 0 6 0 6 0 0 0 0 0
0 0 0 0 0 6 6 0 7 0 0 7 7
0 0 0 0 0 6 0 7 0 7 7 0 0
0 0 0 0 6 6 0 0 7 0 7 7 0
0 0 0 0 0 0 0 0 7 7 0 8 0
0 0 0 0 0 0 0 7 0 7 8 0 8
0 0 0 0 0 0 0 7 0 0 0 8 0
=================================
Output :
Do dai cay khung nho nhat la: 60
1 3
2 3
1 4
2 6
2 7
4 5
6 8
6 10
6 9
8 12
8 13
9 11
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, mat[100][100], parent[100], sz[100];
vector<tuple<int, int, int>> edge;
bool visited[100];

void make_set() {
    for (int i=1;i<=n;i++) {
        parent[i] = i;
        sz[i] = 1;
    }
}

int find(int v) {
    if (v==parent[v])
        return v;
    else return parent[v] = find(parent[v]);
}

bool Union(int a, int b) {
    a = find(a);
    b = find(b);
    if (a==b) return false;
    if (a<b) swap(a, b);
    parent[b] = a;
    sz[a] += sz[b];
    return true;
}

bool cmp(tuple<int, int, int> a, tuple<int, int, int> b) {
	return get<2>(a) < get<2>(b);
}

void kruskal() {
	vector<pair<int, int>> t;
	int d = 0;
	sort(edge.begin(), edge.end(), cmp);
	while (t.size()<n-1 and !edge.empty()) {
		tuple<int, int, int> e = edge[0];
		int a = get<0>(e), b = get<1>(e), h = get<2>(e);
		edge.erase(edge.begin(), edge.begin()+1);
		if (Union(a, b)) {
			t.push_back(make_pair(a, b));
			d += h;
		}
	}
	if (t.size()<n-1) cout << "Do thi da nhap khong lien thong.";
	else {
		cout << "Do dai cay khung nho nhat la: " << d << endl;
		for (auto x : t) cout << x.first << ' ' << x.second << endl;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	cin >> n;
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++) {
			int x; cin >> x;
			mat[i][j] = x;
			if (i<j and x) {
				tuple<int, int, int> tmp{i, j, x};
				edge.push_back(tmp);
			}
		}
	make_set();
	kruskal();
}
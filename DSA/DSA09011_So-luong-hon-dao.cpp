#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m, mat[505][505];
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void dfs(int x, int y) {
    if (x and y and x<=n and y<=m and mat[x][y]) {
        mat[x][y] = 0;
        for (int i=0;i<8;i++) dfs(x+dx[i], y+dy[i]);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i=1;i<=n;i++)
            for (int j=1;j<=m;j++)
                cin >> mat[i][j];
        int cnt = 0;
        for (int i=1;i<=n;i++)
            for (int j=1;j<=m;j++) {
                if (mat[i][j]) {
                    cnt++;
                    dfs(i, j);
                }
            }
        cout << cnt << endl;
    }
}
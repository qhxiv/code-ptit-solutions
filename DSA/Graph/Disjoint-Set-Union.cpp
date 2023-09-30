// Disjoint set union
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, parent[1000], sz[1000];

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

void Union(int a, int b) {
    a = find(a);
    b = find(b);
    if (a!=b) {
        if (sz[a]<sz[b]) swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
    }
}

int main() {

}
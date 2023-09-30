#include <bits/stdc++.h>

using namespace std;

struct goods {
	int ma;
	string ten, nhom;
	float mua, ban, loi;
};

void nhap(goods a[], int n) {
	for (int i=0;i<n;i++) {
		getline(cin, a[i].ten);
		getline(cin, a[i].nhom);
		cin >> a[i].mua >> a[i].ban;
		a[i].loi = a[i].ban - a[i].mua;
		a[i].ma = i+1;
		cin.ignore();
	}
}

void in(goods a[], int n) {
	for (int i=0;i<n;i++) {
		cout << a[i].ma << " " << a[i].ten << " " << a[i].nhom << " " << fixed << setprecision(2) << a[i].loi << endl;
	}
}

bool cmp(goods a, goods b) {
	return a.loi > b.loi;
}

int main() {
	int n; cin >> n;
	struct goods a[n];
	cin.ignore();
	nhap(a, n);
	sort(a, a+n, cmp);
	in(a, n);
	return 0;
}

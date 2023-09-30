#include <bits/stdc++.h>

using namespace std;

class gv {
	private:
		string ma = "GV", ht, ten, bm, mon = "";
		static int cnt;
	public:
		void nhap();
		void xuat();
		string getTen();
		string getMa();
};

string gv::getTen() {
	return ten;
}

string gv::getMa() {
	return ma;
}

int gv::cnt = 0;

void gv::nhap() {
	cnt++;
	if (cnt<10)
		ma += "0" + to_string(cnt);
	else ma += to_string(cnt);
	if (cnt==1)
		scanf("\n");
	getline(cin, ht);
	getline(cin, bm);
	stringstream ss(bm);
	string tmp;
	while (ss >> tmp) {
		mon += toupper(tmp[0]);
	}
	stringstream ss1(ht);
	int count = 0;
	while (ss1 >> tmp) {
		count++;
	};
	stringstream ss2(ht);
	while (ss2 >> tmp) {
		count--;
		if (0==count)
			ten = tmp;
	}
}

void gv::xuat() {
	cout << ma << " " << ht << " " << mon << endl;
}

bool cmp(gv a, gv b) {
	if (a.getTen() == b.getTen())
		return a.getMa() < b.getMa();
	return a.getTen() < b.getTen();
}

int main() {
	int n; cin >> n;
	vector<gv> v;
	while (n--) {
		gv x;
		x.nhap();
		v.push_back(x);
	}
	sort(v.begin(), v.end(), cmp);
	for (gv x : v) {
		x.xuat();
	}
	return 0;
}

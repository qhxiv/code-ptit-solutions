#include <bits/stdc++.h>

using namespace std;

class gv {
	private:
		string ma = "GV", ht, bm;
		static int cnt;
	public:
		void nhap();
		void xuat();
		string getMa();
		string getBm();
};

string gv::getMa() {
	return ma;
}

string gv::getBm() {
	return bm;
}

int gv::cnt = 0;

void chbm(string &s) {
	stringstream ss(s);
	string tmp;
	string res = "";
	while (ss >> tmp) {
		res += toupper(tmp[0]);
	}
	s = res;
}

void gv::nhap() {
	cnt++;
	if (cnt<10)
		ma += "0" + to_string(cnt);
	else ma += to_string(cnt);
	if (cnt==1)
		scanf("\n");
	getline(cin, ht);
	getline(cin, bm);
	chbm(bm);
}

void gv::xuat() {
	cout << ma << " " << ht << " " << bm << endl;
}

int main() {
	int n; cin >> n;
	map<string, vector<gv>> mp;
	while (n--) {
		gv x;
		x.nhap();
		mp[x.getBm()].push_back(x);
	}
	int q; cin >> q;
	cin.ignore();
	while (q--) {
		string x;
		getline(cin, x);
		chbm(x);
		cout << "DANH SACH GIANG VIEN BO MON " << x << ":\n";
		for (gv y : mp[x]) {
			y.xuat();
		}
	}
	return 0;
}

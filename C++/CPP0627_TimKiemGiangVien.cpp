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
		bool check(string);
};

string gv::getMa() {
	return ma;
}

string gv::getBm() {
	return bm;
}

int gv::cnt = 0;

string lower(string s) {
	for (int i=0;i<s.size();i++) {
		s[i] = tolower(s[i]);
	}
	return s;
}

bool gv::check(string x) {
	for (int i=0;i<=(ht.size()-x.size());i++) {
		if (lower(ht.substr(i, x.size())) == lower(x))
			return 1;
	}
	return 0;
}

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
	vector<gv> v;
	while (n--) {
		gv x;
		x.nhap();
		v.push_back(x);
	}
	int q; cin >> q;
	while (q--) {
		string x;
		cin >> x;
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << x << ":\n";
		for (gv y : v) {
			if (y.check(x))
				y.xuat();
		}
	}
	return 0;
}

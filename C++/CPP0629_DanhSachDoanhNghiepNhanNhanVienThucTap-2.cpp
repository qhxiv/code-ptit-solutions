#include <bits/stdc++.h>

using namespace std;

class dn {
	private:
		string ma, ten;
		int sl;
	public:
		friend istream& operator >> (istream&, dn&);
		friend ostream& operator << (ostream&, dn);
		string getMa();
		int getSl();
};

string dn::getMa() {
	return ma;
}

int dn::getSl() {
	return sl;
}

istream& operator >> (istream &in, dn &a) {
	in >> a.ma;
	in.ignore();
	getline(in, a.ten);
	cin >> a.sl;
	return in;
}

ostream& operator << (ostream &out, dn a) {
	out << a.ma << " " << a.ten << " " << a.sl;
	return out;
}

bool cmp(dn a, dn b) {
	if (a.getSl() == b.getSl())
		return a.getMa() < b.getMa();
	return a.getSl() > b.getSl();
}

int main() {
	int n; cin >> n;
	vector<dn> v;
	while (n--) {
		dn tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end(), cmp);
	int q; cin >> q;
	while (q--) {
		int a, b; cin >> a >> b;
		cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:\n";
		for (dn x : v) {
			if (x.getSl()>b)
				continue;
			else if (x.getSl()<a)
				break;
			else
				cout << x << endl;
		}
	}
	return 0;
}

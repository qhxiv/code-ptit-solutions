#include <bits/stdc++.h>

using namespace std;

class SinhVien {
	private:
		string ma, ten, lop, email, khoa;
	public:
		SinhVien();
		friend istream& operator >> (istream&, SinhVien&);
		friend ostream& operator << (ostream&, SinhVien);
		bool operator < (SinhVien);
		string getKhoa();
};

bool SinhVien::operator < (SinhVien a) {
	return this->ma < a.ma;
}

string SinhVien::getKhoa() {
	return khoa;
}

SinhVien::SinhVien() {
	ma = ten = lop = email = khoa = "";
}

istream& operator >> (istream &in, SinhVien &a) {
	in >> a.ma;
	in.ignore();
	getline(in, a.ten);
	in >> a.lop >> a.email;
	a.khoa = "20" + a.lop.substr(1, 2);
	return in;
}

ostream& operator << (ostream &out, SinhVien a) {
	out << a.ma << " " << a.ten << " " << a.lop << " " << a.email;
	return out;
}

int main(){
    int n; cin >> n;
    map<string, vector<SinhVien>> mp;
    while (n--) {
    	SinhVien tmp;
    	cin >> tmp;
    	mp[tmp.getKhoa()].push_back(tmp);
	}
	int q; cin >> q;
	while (q--) {
		string tmp; cin >> tmp;
		cout << "DANH SACH SINH VIEN KHOA " << tmp << ":\n";
		for (SinhVien x : mp[tmp]) {
			cout << x << endl;
		}
	}
    return 0;
}

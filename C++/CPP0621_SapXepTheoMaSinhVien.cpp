#include <bits/stdc++.h>

using namespace std;

class SinhVien {
	private:
		string ma, ten, lop, email;
	public:
		SinhVien();
		friend istream& operator >> (istream&, SinhVien&);
		friend ostream& operator << (ostream&, SinhVien);
		bool operator < (SinhVien);
};

bool SinhVien::operator < (SinhVien a) {
	return this->ma < a.ma;
}

SinhVien::SinhVien() {
	ma = ten = lop = email = "";
}

istream& operator >> (istream &in, SinhVien &a) {
	in >> a.ma;
	in.ignore();
	getline(in, a.ten);
	in >> a.lop >> a.email;
	return in;
}

ostream& operator << (ostream &out, SinhVien a) {
	out << a.ma << " " << a.ten << " " << a.lop << " " << a.email;
	return out;
}

int main(){
    vector<SinhVien> v;
    SinhVien tmp;
    while (cin >> tmp) {
    	v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	for (SinhVien x : v) {
		cout << x << endl;
	}
    return 0;
}

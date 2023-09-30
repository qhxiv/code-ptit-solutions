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
	if (this->lop!=a.lop)
		return this->lop < a.lop;
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
    int n; cin >> n;
    SinhVien ds[n];
    for (int i=0;i<n;i++) {
    	cin >> ds[i];
	}
	sort(ds, ds+n);
	for (int i=0;i<n;i++) {
		cout << ds[i] << endl;
	}
    return 0;
}

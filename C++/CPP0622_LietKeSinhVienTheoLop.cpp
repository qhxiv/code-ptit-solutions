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
		friend void find(SinhVien a[], int n, string q);
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

void find(SinhVien a[], int n, string q) {
	cout << "DANH SACH SINH VIEN LOP " << q << ":\n";
	for (int i=0;i<n;i++) {
		if (a[i].lop==q) {
			cout << a[i] << endl;
		}
	}
}

int main(){
    int n; cin >> n;
    SinhVien a[n];
    for (int i=0;i<n;i++) {
    	cin >> a[i];
	}
	int m; cin >> m; string q;
	for (int i=0;i<m;i++) {
		cin >> q;
		find(a, n, q);
	}
    return 0;
}

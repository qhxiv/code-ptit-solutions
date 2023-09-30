#include <bits/stdc++.h>

using namespace std;

class SinhVien {
	private:
		string ma = "B20DCCN001", ten, lop, ns;
		float gpa;
	public:
		SinhVien();
		void nhap();
		void xuat();
};

SinhVien::SinhVien() {
	ten = lop = ns = "";
	gpa = 0;
}

void SinhVien::nhap() {
	getline(cin, ten);
	cin >> lop >> ns >> gpa;
	if (ns[1]=='/')
		ns = "0" + ns;
	if (ns[4]=='/')
		ns.insert(3, "0");
}

void SinhVien::xuat() {
	cout << ma << " " << ten << " " << lop << " " << ns << " " << fixed << setprecision(2) << gpa;
}

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}

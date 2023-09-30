#include <bits/stdc++.h>

using namespace std;

class SinhVien {
	private:
		string ma, ten, lop, ns;
		float gpa;
	public:
		SinhVien();
		friend istream& operator >> (istream&, SinhVien&);
		friend ostream& operator << (ostream&, SinhVien);
		void chNs();
};

SinhVien::SinhVien() {
	ma = "B20DCCN001";
	ten = lop = ns = "";
	gpa = 0;
}

void SinhVien::chNs() {
	if (ns[1]=='/')
		ns = "0" + ns;
	if (ns[4]=='/')
		ns.insert(3, "0");
}

istream& operator >> (istream &in, SinhVien &a) {
	getline(in, a.ten);
	in >> a.lop >> a.ns >> a.gpa;
	return in;
}

ostream& operator << (ostream &out, SinhVien a) {
	a.chNs();
	out << a.ma << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa;
	return out;
}

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}

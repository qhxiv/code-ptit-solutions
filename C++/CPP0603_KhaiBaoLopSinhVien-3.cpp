#include <bits/stdc++.h>

using namespace std;

class SinhVien {
	private:
		string ma = "B20DCCN001", ten, lop, ns;
		float gpa;
		static int dem;
	public:
		friend istream& operator >> (istream&, SinhVien&);
		friend ostream& operator << (ostream&, SinhVien&);
		void chTen();
		void chNs();
};

void SinhVien::chNs() {
	if (ns[1]=='/') {
		ns = "0" + ns;
	}
	if (ns[4]=='/') {
		ns.insert(3, "0");
	}
}

void SinhVien::chTen() {
	string res = "";
	stringstream ss(ten);
	string tmp;
	while (ss >> tmp) {
		tmp[0] = toupper(tmp[0]);
		for (int i=1;i<tmp.size();i++)
			tmp[i] = tolower(tmp[i]);
		res += tmp + " ";
	}
	res.erase(res.size()-1, 1);
	ten = res;
}

istream& operator >> (istream &in, SinhVien &a) {
	getline(in, a.ten);
	in >> a.lop >> a.ns >> a.gpa;
	a.chTen();
	a.chNs();
	return in;
}

ostream& operator << (ostream &out, SinhVien &a) {
	out << a.ma << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa;
	return out;
}

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}

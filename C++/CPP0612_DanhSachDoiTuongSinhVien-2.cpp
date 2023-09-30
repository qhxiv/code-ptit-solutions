#include <bits/stdc++.h>

using namespace std;

class SinhVien {
	private:
		string ma = "B20DCCN0", ten, lop, ns;
		float gpa;
		static int dem;
	public:
		friend istream& operator >> (istream&, SinhVien&);
		friend ostream& operator << (ostream&, SinhVien&);
		void tangDem();
		int getDem();
		void chNs();
		void chTen();
};

int SinhVien::dem = 0;

void SinhVien::tangDem() {
	dem++;
}

int SinhVien::getDem() {
	return dem;
}

void SinhVien::chNs() {
	if (ns[1]=='/')
		ns = "0" + ns;
	if (ns[4]=='/')
		ns.insert(3, "0");
}

void SinhVien::chTen() {
	string res = "";
	string tmp;
	stringstream ss(this->ten);
	while (ss >> tmp) {
		tmp[0] = toupper(tmp[0]);
		for (int i=1;i<tmp.size();i++)
			tmp[i] = tolower(tmp[i]);
		res += tmp + " ";
	}
	res.erase(res.size()-1, 1);
	this->ten = res;
}

istream& operator >> (istream &in, SinhVien &a) {
	a.tangDem();
	if (a.getDem()<10)
		a.ma += "0" + to_string(a.getDem());
	else a.ma += to_string(a.getDem());
	if (a.getDem()==1)
		cin.ignore();
	getline(in, a.ten);
	cin >> a.lop >> a.ns >> a.gpa;
	in.ignore();
	a.chNs();
	a.chTen();
	return in;
}

ostream& operator << (ostream &out, SinhVien &a) {
	out << a.ma << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
	return out;
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}

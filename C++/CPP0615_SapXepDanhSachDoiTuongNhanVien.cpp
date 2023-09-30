#include <bits/stdc++.h>

using namespace std;

class NhanVien {
	private:
		string ma = "000", ten, gt, ns, dc, mst, nkhd, x = "";
		static int dem;
	public:
		friend istream& operator >> (istream&, NhanVien&);
		friend ostream& operator << (ostream&, NhanVien);
		int getDem();
		string getX();
		void tangDem();
};

int NhanVien::dem = 0;

int NhanVien::getDem() {
	return dem;
}

void NhanVien::tangDem() {
	dem++;
}

string NhanVien::getX() {
	return x;
}

istream& operator >> (istream &in, NhanVien &a) {
	a.tangDem();
	if (a.getDem()<10)
		a.ma += "0" + to_string(a.getDem());
	else a.ma += to_string(a.getDem());
	if (a.getDem()==1)
		cin.ignore();
	getline(in, a.ten);
	in >> a.gt >> a.ns;
	a.x += a.ns.substr(6, 4) + a.ns.substr(0, 2) + a.ns.substr(3, 2);
	in.ignore();
	getline(in, a.dc);
	in >> a.mst >> a.nkhd;
	in.ignore();
	return in;
}

ostream& operator << (ostream &out, NhanVien a) {
	out << a.ma << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.nkhd << endl;
	return out;
}

bool cmp(NhanVien a, NhanVien b) {
	return a.getX() < b.getX();
}

void sapxep(NhanVien ds[], int n) {
	sort(ds, ds+n, cmp);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

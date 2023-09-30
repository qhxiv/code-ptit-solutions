#include <bits/stdc++.h>

using namespace std;

class NhanVien {
	private:
		string ma = "000", ten, gt, ns, dc, mst, nkhd;
		static int cnt;
	public:
		friend istream& operator >> (istream&, NhanVien&);
		friend ostream& operator << (ostream&, NhanVien);
		int getCnt();
		void tangCnt();
};

int NhanVien::cnt = 0;

int NhanVien::getCnt() {
	return cnt;
}

void NhanVien::tangCnt() {
	cnt++;
}

istream& operator >> (istream &in, NhanVien &a) {
	a.tangCnt();
	if (a.getCnt()<10)
		a.ma += "0" + to_string(a.getCnt());
	else a.ma += to_string(a.getCnt());
	scanf("\n");
	getline(in, a.ten);
	in >> a.gt >> a.ns;
	scanf("\n");
	getline(in, a.dc);
	in >> a.mst >> a.nkhd;
	return in;
}

ostream& operator << (ostream &out, NhanVien a) {
	out << a.ma << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.nkhd << endl;
	return out;
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

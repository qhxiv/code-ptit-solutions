#include <bits/stdc++.h>

using namespace std;

class NhanVien {
	private:
		string ma = "00001", ten, gt, ns, dc, mst, nkhd;
	public:
		void nhap();
		void xuat();
};

void NhanVien::nhap() {
	getline(cin, ten);
	cin >> gt >> ns;
	cin.ignore();
	getline(cin, dc);
	cin >> mst >> nkhd;
}

void NhanVien::xuat() {
	cout << ma << " " << ten << " " << gt << " " << ns << " " << dc << " " << mst << " " << nkhd;
}

int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}

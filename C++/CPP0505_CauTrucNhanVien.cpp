#include <bits/stdc++.h>

using namespace std;

struct NhanVien {
	string mnv, ten, gt, ns, dc, mst, nkhd;
};

void nhap(NhanVien &a) {
	a.mnv = "00001";
	getline(cin, a.ten);
	cin >> a.gt >> a.ns;
	cin.ignore();
	getline(cin, a.dc);
	cin >> a.mst >> a.nkhd;
}

void in(NhanVien a) {
	cout << a.mnv << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.nkhd;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
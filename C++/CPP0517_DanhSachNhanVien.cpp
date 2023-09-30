#include <bits/stdc++.h>

using namespace std;

struct NhanVien {
	string mnv, ten, gt, ns, dc, mst, nkhd;
};

void nhap(NhanVien &a) {
	a.mnv = "000";
	cin.ignore();
	getline(cin, a.ten);
	cin >> a.gt >> a.ns;
	cin.ignore();
	getline(cin, a.dc);
	cin >> a.mst >> a.nkhd;
}

void inds(NhanVien ds[], int n) {
	for (int i=0; i<n; i++) {
		string tmp;
		if (i+1<10) {
			tmp = "0" + to_string(i+1);
		}
		else tmp = to_string(i+1);
		ds[i].mnv = ds[i].mnv + tmp;
		cout << ds[i].mnv << " " << ds[i].ten << " " << ds[i].gt << " " << ds[i].ns << " " << ds[i].dc << " " << ds[i].mst << " " << ds[i].nkhd << endl;
	}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
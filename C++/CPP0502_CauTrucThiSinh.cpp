#include <bits/stdc++.h>

using namespace std;

struct ThiSinh {
	string ten;
	float diem1, diem2, diem3, tongdiem;
	string ngaysinh;
};

void nhap(ThiSinh &a) {
	getline (cin, a.ten);
	cin >> a.ngaysinh;
	cin >> a.diem1 >> a.diem2 >> a.diem3;
	a.tongdiem = a.diem1 + a.diem2 + a.diem3;
}

void in(ThiSinh a) {
	cout << a.ten << " " << a.ngaysinh << " " << setprecision(1) << fixed << a.tongdiem;
}

int main(){
	struct ThiSinh A;
	nhap(A);
	in(A);
	cout << endl;
	return 0;
}
#include <bits/stdc++.h>
#include <string.h>

using namespace std;

struct SinhVien {
	string msv, ten, lop, ns;
	float gpa;
};

void nhap(SinhVien ds[], int n) {
	for (int i=0; i<n; i++) {
		ds[i].msv = "B20DCCN";
		cin.ignore();
		getline(cin, ds[i].ten);
		cin >> ds[i].lop;
		cin >> ds[i].ns;
		cin >> ds[i].gpa;
	}
}

void in(SinhVien ds[], int n) {
	for (int i=0; i<n; i++) {
		//chuan hoa ma sinh vien
		string tmp = "0";
		if (i+1<10)
			tmp = tmp + "0" + to_string(i+1);
		else tmp += to_string(i+1);
		ds[i].msv += tmp;
		
		//chuan hoa ngay sinh
		if (ds[i].ns[1]=='/')
			ds[i].ns = "0" + ds[i].ns;
		if (ds[i].ns[4]=='/')
			ds[i].ns.insert(3, "0");
		
		//in ra
		cout << ds[i].msv << " " << ds[i].ten << " " << ds[i].lop << " " << ds[i].ns << " " << setprecision(2) << fixed << ds[i].gpa << endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}

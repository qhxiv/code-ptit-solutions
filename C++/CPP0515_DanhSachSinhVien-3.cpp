#include <bits/stdc++.h>

using namespace std;

struct SinhVien {
	string ma = "B20DCCN", ten, lop, ns;
	float gpa;
};

void lower(string &s) {
	for (int i=0;i<s.size();i++) {
		if (s[i]>='A' && s[i]<='Z')
			s[i] -= ('A'-'a');
	}
}

void chTen(string &s) {
	stringstream ss(s);
	string tmp, res = "";
	while (ss >> tmp) {
		lower(tmp);
		if (tmp[0]>='a'&&tmp[0]<='z')
			tmp[0] += 'A' - 'a';
		res += tmp + " ";
	}
	s = res;
}

void chNs(string &s) {
	if (s[1]=='/')
		s = "0" + s;
	if (s[4]=='/')
		s.insert(3, "0");
}

void nhap(SinhVien ds[], int n) {
	for (int i=0;i<n;i++) {
		string tmp = "0";
		int j = i+1;
		if (j<10) {
			tmp += "0" + to_string(j);
		} else {
			tmp += to_string(j);
		}
		ds[i].ma += tmp;
		cin.ignore();
		getline(cin, ds[i].ten);
		chTen(ds[i].ten);
		cin >> ds[i].lop >> ds[i].ns >> ds[i].gpa;
		chNs(ds[i].ns);
	}
}

bool cmp(SinhVien a, SinhVien b) {
	return a.gpa > b.gpa;
}

void sapxep(SinhVien ds[], int n) {
	sort(ds, ds+n, cmp);
}

void in(SinhVien ds[], int n) {
	for (int i=0;i<n;i++) {
		cout << ds[i].ma << " " << ds[i].ten << ds[i].lop << " " << ds[i].ns << " " << fixed << setprecision(2) << ds[i].gpa << endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}

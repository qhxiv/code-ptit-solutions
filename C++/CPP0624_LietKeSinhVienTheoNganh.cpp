#include <bits/stdc++.h>

using namespace std;

class SinhVien {
	private:
		string ma, ten, lop, email, nganh;
	public:
		SinhVien();
		friend istream& operator >> (istream&, SinhVien&);
		friend ostream& operator << (ostream&, SinhVien);
		string getNganh();
		string getLop();
};

string SinhVien::getNganh() {
	return nganh;
}

string SinhVien::getLop() {
	return lop;
}

SinhVien::SinhVien() {
	ma = ten = lop = email = nganh = "";
}

istream& operator >> (istream &in, SinhVien &a) {
	in >> a.ma;
	in.ignore();
	getline(in, a.ten);
	in >> a.lop >> a.email;
	a.nganh = a.ma.substr(3, 4);
	return in;
}

ostream& operator << (ostream &out, SinhVien a) {
	out << a.ma << " " << a.ten << " " << a.lop << " " << a.email;
	return out;
}

void process(pair<string, string> &temp, string tmp) {
	if (tmp=="Ke toan") {
		temp.first = "DCKT";
		temp.second = "KE TOAN";
	} else if (tmp=="Cong nghe thong tin") {
		temp.first = "DCCN";
		temp.second = "CONG NGHE THONG TIN";
	} else if (tmp=="An toan thong tin") {
		temp.first = "DCAT";
		temp.second = "AN TOAN THONG TIN";
	} else if (tmp=="Vien thong") {
		temp.first = "DCVT";
		temp.second = "VIEN THONG";
	} else if (tmp=="Dien tu") {
		temp.first = "DCDT";
		temp.second = "DIEN TU";
	}
}

int main(){
    int n; cin >> n;
    map<string, vector<SinhVien>> mp;
    while (n--) {
    	SinhVien tmp;
    	cin >> tmp;
    	mp[tmp.getNganh()].push_back(tmp);
	}
	int q; cin >> q;
	cin.ignore();
	while (q--) {
		string tmp;
		getline(cin, tmp);
		pair<string, string> temp;
		process(temp, tmp);
		cout << "DANH SACH SINH VIEN NGANH " << temp.second << ":\n";
		for (SinhVien x : mp[temp.first]) {
			if ((temp.first=="DCCN"||temp.first=="DCAT")&&x.getLop()[0]=='E')
				continue;
			cout << x << endl;
		}
	}
    return 0;
}

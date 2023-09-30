#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
	int t;
	cin >> t;
	string ma101 = "ABBADCCABDCCABD";
	string ma102 = "ACCABCDDBBCDDBB";
	string dapAn;
	while (t--) {
		float diem, correct = 0;
		int maDe;
		cin >> maDe;
		switch (maDe) {
			case 101: {
				dapAn = ma101;
				break;
			}
			case 102: {
				dapAn = ma102;
				break;
			}
		}
		string baiLam;
		for (int i=0; i<15; i++){
			cin >> baiLam[i];
			if (baiLam[i] == dapAn[i])
				correct++ ;
		}
		diem = correct * 10 / 15;
		cout << setprecision(2) << fixed << diem << endl;
	}
	return 0;
}
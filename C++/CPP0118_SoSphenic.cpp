#include <iostream>
#include <math.h>
using namespace std;

bool check(int n) {
	if (n==1)
		return 0;
	int count2 = 0;
	for (int i=2; i<=sqrt(n); i++) {
		if (n%i==0) {
			int count = 0;
			while (n%i==0) {
				count++;
				n/=i;
				if (count>1)
					return 0;
			}
			count2++;
		}
	}
	if (n!=1)
		count2++;
	return count2==3;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << check(n) << endl;
	}
	return 0;
}
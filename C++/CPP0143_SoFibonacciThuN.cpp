#include <iostream>
#include <math.h>
using namespace std;

long long F[93];

void fibonacci() {
	F[0] = 0;
	F[1] = 1;
	for (int i=2; i<=92; i++)
		F[i] = F[i-1] + F[i-2];
}

int main() {
	fibonacci();
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		if (n>92 || n<1)
			continue;
		cout << F[n] << endl;
	}
	return 0;
}
#include <iostream>

using namespace std;

int main() {
	int count[1001] = {0};
	int n;
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
		count[a[i]] = 1;
	}
	for (int i=0; i<=1000; i++)
		if(count[i]==1)
			cout << i << " ";
	return 0;
}

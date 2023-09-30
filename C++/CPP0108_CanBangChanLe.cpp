#include <iostream>
#include <math.h>
using namespace std;

bool check(int i) {
	int c = 0, l = 0;
	while (i) {
		int j = i % 10;
		if (j%2 == 0)
			c++;
		else l++;
		i/=10;
	}
	return (c == l);
}

int main() {
	int n;
	cin >> n;
	int count = 0;
	for (int i=pow(10, n-1); i<pow(10, n); i++) {
		if (check(i)){
			count++;
			cout << i << " ";
		}
		if (count%10 == 0)
			cout << endl;
	}
	return 0;
}
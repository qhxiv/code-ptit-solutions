#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
	double x = fabs(x1 - x2);
	double y = fabs(y1 - y2);
	return sqrt(x*x + y*y);
}

int main() {
	int t;
	cin >> t;
	while (t>20)
		cin >> t;
	while (t--) {
		double x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << setprecision(4) << fixed << distance(x1, y1, x2, y2) << endl;
	}
	return 0;
}
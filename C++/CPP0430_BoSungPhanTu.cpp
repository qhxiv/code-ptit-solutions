#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
    	int count[100001] = {0};
    	int n, cnt = 0, max = 0, min = 100001;
    	cin >> n;
    	int a[n];
    	for (int i=0; i<n; i++) {
    		cin >> a[i];
    		if (min>a[i])
    			min = a[i];
    		else if (max<a[i])
    			max = a[i];
    		count[a[i]] = 1;
		}
		for (int i=min; i<=max; i++)
			if (count[i]==0)
				cnt++;
		cout << cnt << endl;
	}
    return 0;
}

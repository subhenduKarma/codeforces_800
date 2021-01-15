#include<bits/stdc++.h>
using namespace std;

// a = weight of limak
// b = weight of Bob

int main() {
	int a, b;
	int cnt=0;
	cin >> a >> b;
	while(b >= a) {
		cnt++;
		a = 3*a;
		b = 2*b;
	}
	cout << cnt;
	return 0;
}
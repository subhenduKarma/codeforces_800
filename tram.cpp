#include<bits/stdc++.h>
using namespace std;

// a=number of passenger exit
// b=number of passenger enters

int main() {
	int n;
	int a, b, sum=0, max=0;
	cin >> n;
	while(n--) {
		cin >> a>> b;
		sum += b-a;
		if(sum > max) {
			max = sum;
		}
	}
	cout << max;
	return 0;
}
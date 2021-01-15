#include<bits/stdc++.h>
using namespace std;

// k = cost of the first banana
// n = dollers he has
// w = number of bananas he has to buy

// o/p = how much money he wants from his friend
int main() {
	int k, n, w;
	int sum=0;
	cin >> k >> n >> w;
	for(int i=1; i<=w; i++) {
		sum+= i*k;
	}
	if(sum-n < 0) {
		cout << 0;
	} else {
		cout << sum-n;
	}
	return 0;
}
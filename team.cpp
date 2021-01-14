#include<bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	int a, count = 0;
	while(n--) {
		int sum = 0;
		for(int i=0; i<3; i++) {
			cin >> a;
			sum += a;
		}
		if(sum > 1) count++;
	}
	cout << count;
	return 0;
}
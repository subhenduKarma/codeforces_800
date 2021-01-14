#include<bits/stdc++.h>
using namespace std;
 
int main() {
	int n, x=0;
	string s;
	cin >> n;
	while(n--) {
		cin >> s;
		if(s[0] == '+' || s[s.length()-1] == '+'){
			x++;
		} else {
			x--;
		}
	}
	cout << x;
}
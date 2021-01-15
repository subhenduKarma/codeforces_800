#include<bits/stdc++.h>
using namespace std;

// a=97
// A=65

int main() {
	int sm=0, cap=0;
	string s;
	cin >> s;
	for(int i=0; i<s.size(); ++i) {
		if(s[i] >= 97) sm++;
		else cap++;
	}
	if(sm>=cap) {
		for(int i=0; i<s.size(); i++) {
			if(s[i]<97) s[i] += 32;
		}
	} else {
		for(int i=0; i<s.size(); i++) {
			if(s[i]>=97) s[i] -= 32;
		}
	}
	cout << s;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
	int len, i, j;
	char s[100];
	cin >> s;
	len = strlen(s);
	for(i=0; i<len; i+=2){
		for(j=0; j<len-i-2; j+=1){
			if(s[j]>s[j+2]){
				swap(s[j], s[j+2]);
			}
		}
	}
	cout << s;
	return 0;
}
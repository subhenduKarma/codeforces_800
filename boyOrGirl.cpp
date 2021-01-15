#include<bits/stdc++.h>
using namespace std;

int main() {
	int l, cnt=1;
	char s[101];
	scanf("%s", &s);
	l=strlen(s);
	sort(s, s+l);
	for(int i=0; i<l-1; i++) {
		if(s[i] != s[i+1])
			cnt++;
	}
	if(cnt%2 == 1) 
		printf("IGNORE HIM!\n");
	else 
		printf("CHAT WITH HER!\n");
	return 0;
}
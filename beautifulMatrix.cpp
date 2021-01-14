#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[5][5], pos=0, count=0;
	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			cin>> a[i][j];
		}
	}
	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			if(a[i][j] > 0) {
				pos = (i+1)*10 + (j+1);
				break;
			}
		}
	}
	int rem = pos%10;
	int cos = pos/10;
	while(rem != 3) {
		if(rem > 3){
			(rem)--;
			count++;
		} else {
			(rem)++;
			count++;
		}
		pos = (cos)*10 + (rem);
	}
	while(cos != 3) {
		if(cos > 3){
			(cos)--;
			count++;
		} else {
			(cos)++;
			count++;
		}
		pos = (cos)*10 + (rem);
	}
	cout << count;
	return 0;
}
#include <iostream>
using namespace std;

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2;
    for(int i=s1.size()-1; i>=0; --i) {
    	s3.push_back(s1[i]);
    }
    if(s2 == s3) {
    	printf("YES");
    	return 0;
    }
    printf("NO");
    return 0;
}
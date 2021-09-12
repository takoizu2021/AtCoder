#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	string s,ans="";
	for(int i=0; i<n; i++) {
		cin>>s;
		ans += s[0];
	}
	cout <<ans<< endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	string s;
	int ans=0;
	for(int i=0; i<n; i++) {
		cin>>s;
		ans += s.size();
	}
	cout <<ans<< endl;
	return 0;
}
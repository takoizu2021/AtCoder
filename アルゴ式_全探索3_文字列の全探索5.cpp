#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,t;
	cin>>s>>t;

	string ans="No";
	if(s.find(t) != -1) ans="Yes";

	cout<<ans<<endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;

	string t=s;
	reverse(t.begin(),t.end());

	string ans="No";
	if(s==t) ans="Yes";
	cout<<ans<<endl;
	return 0;
}
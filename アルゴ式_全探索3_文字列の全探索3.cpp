#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;

	int n=s.size(), ct=0;
	for(int i=1; i<n; i++) {
		if(s[i-1]!=s[i]) ct++;
	}
	int ans=n-ct-1;
	cout<<ans<<endl;
	return 0;
}
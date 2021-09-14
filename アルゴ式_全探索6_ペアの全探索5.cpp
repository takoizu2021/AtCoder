#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string s;
	cin>>n>>s;

	int ans=0;
	for(int x=0; x<n; x++) {
		for(int y=x+1; y<n; y++) {
			if(s[x] == s[y]) ans++;
		}
	}

	cout<<ans<<endl;
	return 0;
}
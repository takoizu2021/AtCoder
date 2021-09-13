#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;

	vector<string> s(n);
	for(int i=0; i<n; i++) cin>>s[i];

	int ans=0;
	bool flag=true;
	for(int i=0; i<n; i++) {
		int l=s[i].size();
		for(int j=0; j<l; j++) {
			if( s[i][j] != s[i][l-1-j] ) flag=false;
		}
		if(flag) ans++;
		flag=true;
	}

	cout<<ans<<endl;
	return 0;
}
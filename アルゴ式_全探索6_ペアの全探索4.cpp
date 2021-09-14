#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;

	vector<string> s(n);
	for(int i=0; i<n; i++) cin>>s[i];

	string ans="No";
	for(int i=0; i<n; i++) {
		for(int j=i+1; j<n; j++) {
			if(s[i] == s[j]) ans="Yes";
		}
	}

	cout<<ans<<endl;
	return 0;
}
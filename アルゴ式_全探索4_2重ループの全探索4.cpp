#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	
    int n=s.size();
    set<char> ct;
    for(int i=0; i<n; i++) ct.insert(s[i]);

    int ans = ct.size();

    cout<<ans<<endl;
	return 0;
}
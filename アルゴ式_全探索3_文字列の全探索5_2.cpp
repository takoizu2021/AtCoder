#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,t;
	cin>>s>>t;

	int n=s.size(), m=t.size();
    bool chk=false;
    for(int i=0; i<=n-m; i++) {
        if(s.substr(i,m) == t) chk=true;
    }
    if(chk==true) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
	return 0;
}
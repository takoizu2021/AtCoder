#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	char c;
	cin>>s>>c;

	bool chk=false;
	for(int i=0; i<s.size(); i++) {
		if(s[i]==c) chk=true;
	}
	if(chk==false) cout<<"No"<<endl;
	else cout<<"Yes"<<endl; 
	return 0;
}
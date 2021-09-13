#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,v;
	cin>>n>>v;
	vector<int> a(n);
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}

	bool chk = false;
	for(int i=0; i<n; i++) {
		if(a[i]==v) chk=true;
	}
	if(chk==true) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}
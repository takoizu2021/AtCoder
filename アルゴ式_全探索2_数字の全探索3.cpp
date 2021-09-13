#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;

    bool ans=true;    
	for(int i=2; i<n; i++) {
	  if(n%i==0) ans=false;
	}
	if(n!=1 && ans==true) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}
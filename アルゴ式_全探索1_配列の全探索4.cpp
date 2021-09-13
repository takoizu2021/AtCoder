#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,v;
	cin>>n>>v;

	int ans=-1;
	vector<int> a(n);
	for(int i=0; i<n; i++) {
		cin>>a[i];
		if(a[i]==v) ans=i;
	}
	cout<<ans<<endl;	
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;

	int a;
	vector<int> ct(10);
	for(int i=0; i<n; i++) {
		cin>>a;
		ct[a]++;
	}

	int ans=0,mx=0;
	for(int i=1; i<=9; i++) {
		if(mx < ct[i]) {
			mx=ct[i];
			ans=i;
		}
	}
	cout<<ans<<endl;
	return 0;
}
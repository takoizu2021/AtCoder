#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;

	int ct=0, ans=0;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++) {
			if(i%j==0) ct++;
		}
		if(ct==k) ans++;
		ct=0;
	}

	cout<<ans<<endl;	
	return 0;
}
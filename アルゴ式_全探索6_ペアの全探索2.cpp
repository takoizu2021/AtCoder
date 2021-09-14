#include <bits/stdc++.h>
using namespace std;

int main() {
	int l,r;
	cin>>l>>r;

	int ans=0;
	for(int i=l; i<=r; i++) {
		for(int j=i+1; j<=r; j++) {
			if(i%10 == j%10) ans++;
		}
	}

	cout<<ans<<endl;
	return 0;
}
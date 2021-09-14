#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;

	vector<int> a(n);
	for(int i=0; i<n; i++) cin>>a[i];

	int ans=0;
	for(int x=0; x<n; x++) {
		for(int y=x+1; y<n; y++) {
			for(int z=y+1; z<n; z++) {
				if(a[y] == max({a[x],a[y],a[z]})) ans++;
			}
		}
	}

	cout<<ans<<endl;
	return 0;
}
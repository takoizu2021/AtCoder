#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y,z;
	cin>>x>>y>>z;

	vector<int> a(x);
	vector<int> b(y);
	vector<int> c(z);
	for(int i=0; i<x; i++) cin>>a[i];
	for(int i=0; i<y; i++) cin>>b[i];
	for(int i=0; i<z; i++) cin>>c[i];

	int ans=0;
	for(int i=0; i<x; i++) {
		for(int j=0; j<y; j++) {
			for(int k=0; k<z; k++) {
				if(a[i]+b[j] == c[k]) ans++;
			}
		}
	}

	cout<<ans<<endl;
	return 0;
}
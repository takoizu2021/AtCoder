#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ðŽæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;

	vector<int> d(m);
	for(int i=0; i<m; ++i) cin>>d[i];

	bool ans=false;
	vector<bool> f(n+1,false);
    f[0]=true;

	for(int i=0; i<n; ++i) {
        if(f[i]==true) {
		    for(int j=0; j<m; ++j) {
			    if(n >= i+d[j]) f[i+d[j]] = true;
		    }
            if(f[n]==true) ans=true;
        }
	}

    if(ans==true) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
	return 0;
}
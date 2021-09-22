#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ðŽæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;

	vector<int> d(m);
	for(int i=0; i<m; ++i) cin>>d[i];

	vector<bool> f(n+1,false);
    f[0]=true;

	for(int i=1; i<=n; ++i) {
    	for(int j=0; j<m; ++j) {
			if(i-d[j]>=0 && f[i-d[j]] ) f[i] = true;
        }
	}

    cout<< (f[n] ? "Yes":"No") <<endl;
	return 0;
}
#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ðŽæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	vector<int> d(m);
	for(int i=0; i<m; ++i) cin>>d[i];

	vector<bool> t(n+1,false);
	t[0] = true;
	for(int i=0; i<=n; ++i) {
		if(t[i]) {
			for(int j=0; j<m; ++j) {
				if(i+d[j] <= n) t[i+d[j]] = true;
			}
		}
	}

	cout<<(t[n] ? "Yes":"No") <<endl;
	return 0;
}
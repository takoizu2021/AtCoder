#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ðŽæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
const int inf = 1000000;

int main() {
	int n,m;
	cin>>n>>m;
	vector<int> w(n);
	vector<int> v(n);
	for(int i=0; i<n; ++i) cin>>w[i];
	for(int i=0; i<n; ++i) cin>>v[i];

	vector<vector<int> > dp(n+1,vector<int> (m+1,0));
	dp[0][0]=0;
	for(int i=0; i<n; ++i) {
		for(int j=0; j<=m; ++j) {
			if(dp[i][j]<0) continue;
			dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
			if(j+w[i]<=m) dp[i+1][j+w[i]] = max(dp[i+1][j+w[i]], dp[i][j]+v[i]); 
		}
	}
	cout << dp[n][m] << endl;
	return 0;
}
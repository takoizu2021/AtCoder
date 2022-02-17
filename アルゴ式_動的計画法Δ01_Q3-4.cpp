#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

int main() {
	int n,m;
	cin>>n>>m;
	vector<int> w(n), v(n);
	rep(i,n) cin>>w[i];
	rep(i,n) cin>>v[i];

	vector<vector<int>> dp(n+1,vector<int> (m+1,-1));
	dp[0][0]=0;

	rep(i,n) rep(j,m+1) {
		if(dp[i][j] < 0) continue;

		dp[i+1][j] =max(dp[i][j],dp[i+1][j]);
		if(j+w[i]<=m) {
		  dp[i+1][j+w[i]] = max(dp[i][j]+v[i], dp[i+1][j+w[i]]);
		}
	}
	int ans=0;
/*
	rep(i,n+1) rep(j,m+1) {
		cout<<dp[i][j]<<" ";
		if(j==m) cout<<endl;
	}
*/
	rep(i,m+1) ans = max(ans,dp[n][i]);
	cout << ans << endl;
	return 0;
}
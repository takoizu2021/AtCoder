#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 1e9; //10^13
using ll = long long;

int main() {
	int n,m;
	cin>>n>>m;
	vector<vector<int>> c(n,vector<int> (m));
	rep(i,n) rep(j,m) cin>>c[i][j];
	
	vector<vector<int>> dp(n+1,vector<int> (m+1,inf));
	dp[0][0] = 0;

	rep(i,n) rep(j,m) {
		if(i+1 <= n)
		  dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j+1] + c[i][j]);
		if(j+1 <= m)
		  dp[i+1][j+1] = min(dp[i+1][j+1], dp[i+1][j] + c[i][j]);
		if(i+1<=n && j+1<=m)
		  dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j] + c[i][j]);
	}	
	
	cout << dp[n][m] << endl;
	return 0;
}
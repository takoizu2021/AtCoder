#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

int main() {
	int n;
	cin>>n;
	vector<vector<int>> a(n+1,vector<int> (n+1,0));
	rep2(i,1,n+1) rep2(j,1,n+1) cin>>a[i][j];

	vector<vector<int>> dp(n+1,vector<int> (n+1,0));

	rep2(i,1,n+1) rep2(j,1,n+1) {
		dp[i][j] += max(dp[i][j-1],dp[i-1][j]);
		dp[i][j] += a[i][j];
	}

	/*
	rep(i,n+1) rep(j,n+1) {
		cout<<dp[i][j]<<" ";
		if(j==n) cout<<endl;
	}
	*/
	cout<<dp[n][n]<<endl;
	return 0;
}
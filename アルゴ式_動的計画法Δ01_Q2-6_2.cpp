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
	vector<vector<int>> a(n,vector<int> (n,0));
	rep(i,n) rep(j,n) cin>>a[i][j];

	vector<vector<int>> dp(n,vector<int> (n,0));
	dp[0][0] = a[0][0];

	rep(i,n) rep(j,n) {
		if(j>0) 
		dp[i][j] = max(dp[i][j], dp[i][j-1]+a[i][j]);
		if(i>0) 
		dp[i][j] = max(dp[i][j], dp[i-1][j]+a[i][j]);
	}

	/*
	rep(i,n) rep(j,n) {
		cout<<dp[i][j]<<" ";
		if(j==n-1) cout<<endl;
	}
	*/
	cout<<dp[n-1][n-1]<<endl;
	return 0;
}
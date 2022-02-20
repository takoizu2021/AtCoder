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
	vector<int> a(n);
	rep(i,n) cin>>a[i];

	vector<vector<int>> dp(n+1,vector<int> (n+1,-1));
	dp[0][0]=0;
	rep(i,n) rep(j,n+1) {
		if(dp[i][j]<0) continue;
		dp[i+1][j]=max(dp[i+1][j],dp[i][j]);
		dp[i+1][j+1]=max(dp[i+1][j+1],dp[i][j]+a[i]);
	}
	int ans=0;
	rep(j,n+1) ans = max(dp[n][j],ans);
	cout << ans << endl;
	return 0;
}
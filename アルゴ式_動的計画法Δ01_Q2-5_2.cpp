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
	vector<string> s(n);
	rep(i,n) cin>>s[i];

	vector<vector<int>> dp(n,vector<int> (n));
	dp[0][0] = 1;
	rep(i,n) rep(j,n) {
		if(s[i][j] == '#') continue;
		if(j>0) dp[i][j] += dp[i][j-1];
		if(i>0) dp[i][j] += dp[i-1][j];
	}
	cout << dp[n-1][n-1] << endl;
	return 0;
}
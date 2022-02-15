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
	vector<int> a(n-1);
	vector<int> b(n-1);
	rep(i,n-1) cin>>a[i];
	rep(i,n-1) cin>>b[i];

	vector<vector<int>> dp(n,vector<int> (m,-1));
	dp[0][0] = 0;
	rep(i,n-1) rep(j,m) {        
		if(dp[i][j]==-1) continue;
		dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
        
		if(j+a[i]<m) {
          dp[i+1][j+a[i]] = max(dp[i+1][j+a[i]], dp[i][j] + b[i]);          
        }
	}

	cout << dp[n-1][m-1] << endl;
	return 0;
}
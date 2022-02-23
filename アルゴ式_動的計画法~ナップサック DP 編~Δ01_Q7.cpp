#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 1e9; //10^9
using ll = long long;

int main() {
	int n,m;
	cin>>n>>m;

	vector<int> a(n),b(n);
	rep(i,n) cin>>a[i]>>b[i];

	vector<vector<int>> dp(n+1,vector<int> (m+1,inf));
    dp[0][0]=0;
	rep(i,n) rep(j,m+1) {
      if(dp[i][j]<inf) dp[i+1][j]=0;
      if(j>=a[i]) {
          if(dp[i][j-a[i]]<inf) {
              dp[i+1][j] = min(dp[i][j],1);
          }
          if(dp[i+1][j-a[i]] < b[i]) {
              dp[i+1][j] = min(dp[i+1][j], dp[i+1][j-a[i]] + 1);
          }
        }
	}
/*
    rep(i,n+1) rep(j,m+1) {
        cout<<dp[i][j]<<":";
        if(j==m) cout<<endl;
    }
*/
    if (dp[n][m] < inf) cout << "Yes" << endl;
    else cout << "No" << endl;
	return 0;
}
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
    vector<int> w(n);
    rep(i,n) cin>>w[i];

    vector<vector<int>> dp(n+1,vector<int> (m+1,inf));
    dp[0][0]=0;

    rep(i,n) rep(j,m+1) {
        if(dp[i][j]==inf) continue;

        dp[i+1][j] = min(dp[i+1][j], dp[i][j]);

        if(j+w[i] <= m) {
            dp[i+1][j+w[i]] = min(dp[i+1][j+w[i]], dp[i][j]+1);
        }
    }
    
	if(dp[n][m]!=inf) cout << dp[n][m] << endl;
    else cout<<-1<<endl;
	return 0;
}
#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ðŽæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
const int inf = 1000000;

int main() {
    int n,m;
    cin>>n>>m;
    vector<int> w(n);
    for(int i=0; i<n; ++i) cin>>w[i];

    vector<vector<int> > dp(n+1, vector<int> (m+1,inf));
    dp[0][0]=0;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<=m; ++j) {
            if(dp[i][j]==inf) continue;
            dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
            if(j+w[i]<=m) dp[i+1][j+w[i]] = min(dp[i+1][j+w[i]], dp[i][j]+1);
        }
    }

	cout << (dp[n][m]!=inf ? dp[n][m] : -1) << endl;
	return 0;
}
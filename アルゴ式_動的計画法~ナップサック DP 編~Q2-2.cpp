#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ðŽæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
const int inf = 1000000;

int main() {
	int n,w;
	cin>>n>>w;

	vector<pair<int, int>> wv(n);
	int sum=0;
	for(int i=0; i<n; ++i) cin>>wv[i].first>>wv[i].second;
	}
	vector<vector<int> > dp(n+1,vector<int> (w+1,-1));
	dp[0][0]=0;

	for(int i=0; i<n; ++i) {
		for(int j=0; j<=w; ++j) {
			if(dp[i][j]==-1) continue;
			dp[i+1][j] = max( dp[i+1][j], dp[i][j] );
			if(j+wv[i].first<=w) {
				dp[i+1][j+wv[i].first] = 
					max(dp[i+1][j+wv[i].first], dp[i][j] + wv[i].second);
			}
		}
	}

	int ans=0;
	for(int i=0; i<=w; ++i) ans = max(ans,dp[n][i]);
	
	cout << ans << endl;
	return 0;
}
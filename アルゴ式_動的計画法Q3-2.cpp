#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ðŽæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
const int inf = 1000000;

int main() {
	int n,m;
	cin>>n>>m;
	vector<int> w(n);
	for(int i=0; i<n; ++i) cin>>w[i];

	vector<vector<bool> > dp(n+1,vector<bool> (m+1,0));
    dp[0][0]=true;
    for(int i=0; i<n; ++i) {
        for(int j=0; j<=m; ++j) {
            if(!dp[i][j]) continue;
            dp[i+1][j]=true;
            if(j+w[i]<=m) dp[i+1][j+w[i]]=true;
        }
    }
	cout << (dp[n][m] ? "Yes":"No") << endl;
	return 0;
}
#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ðŽæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<int> a(n-1);
    for(int i=0; i<n-1; ++i) cin>>a[i];

    vector<vector<int> > dp(n,vector<int> (m,0));
    dp[0][0]=1;
    for(int i=1; i<n; ++i) {        
        for(int j=0; j<m; ++j) {
            if(dp[i-1][j]>=1) dp[i][j] = dp[i-1][j];
            if(j-a[i-1]>=0&&dp[i-1][j-a[i-1]]>=1) dp[i][j] = dp[i][j-a[i-1]];
            //cout<<dp[i][j];
        }
        //cout<<endl;
    }
    
    int ans=0;
    for(int i=0; i<m; ++i) if(dp[n-1][i]) ans++;
	cout << ans << endl;
    
	return 0;
}
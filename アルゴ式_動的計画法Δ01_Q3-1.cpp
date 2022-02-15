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
    rep(i,n-1) cin>>a[i];

    vector<vector<bool>> dp(n,vector<bool> (m));
    dp[0][0]=true;
    rep(i,n-1) rep(j,m){
        if(dp[i][j]) {
            dp[i+1][j] = true;
            if(j+a[i]<m) dp[i+1][j+a[i]] = true;
        }
    }
    int ans=0;
    rep(i,m) if(dp[n-1][i]) ++ans;
	cout << ans << endl;
	return 0;
}
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
    vector<int> a(n);
    rep(i,n) cin>>a[i];

    vector<vector<int>> dp(n+1,vector<int> (m+1));
    dp[0][0] = 1;

    int mod = 1000;

    rep(i,n) rep(j,m+1) {
        (dp[i+1][j] += dp[i][j])%=mod;
        if(j>=a[i]) (dp[i+1][j] += dp[i][j-a[i]])%=mod;
    }
/*
    rep(i,n+1) rep(j,m+1) {
        cout<<dp[i][j]<<":";
        if(j==m)cout<<endl;
    }
    */
	cout << dp[n][m]%1000 << endl;    
	return 0;
}
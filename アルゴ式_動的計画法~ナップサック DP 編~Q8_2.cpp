#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

int main() {
    string s,t;
    cin>>s>>t;
    int ns=s.size();
    int nt=t.size();
    vector<vector<int>> dp(ns+1,vector<int> (nt+1));

    rep(i,s.size()) rep(j,t.size()) {
        if(s[i]==t[j]) dp[i+1][j+1] = max(dp[i][j]+1, dp[i+1][j+1]);
        dp[i+1][j+1] = max(dp[i+1][j+1], dp[i+1][j]);
        dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j+1]);
    }
/*
    rep(i,ns+1) rep(j,nt+1) {
        cout<<dp[i][j]<<":";
        if(j==nt) cout<<endl;
    }
*/
    cout<<dp[ns][nt]<<endl;
	return 0;
}
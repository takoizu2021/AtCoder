#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

int main() {
    int n;
    cin>>n;
    int m=0;
    vector<int> w(n);
    rep(i,n) {
        cin>>w[i];
        m += w[i];
    }

    vector<vector<bool>> dp(n+1,vector<bool> (m+1,false));
    dp[0][0] = true;
    rep(i,n) rep(j,m+1) {
        if(!dp[i][j]) continue;

        dp[i+1][j+w[i]] = true;
        dp[i+1][abs(j-w[i])] = true;
    }
/*
    rep(i,n+1) rep(j,m+1) {
        cout<<dp[i][j];
        if(j==m) cout<<endl;
    }
*/    
    int res=0;
    while(!dp[n][res]) ++res;
	cout << res << endl;
	return 0;
}
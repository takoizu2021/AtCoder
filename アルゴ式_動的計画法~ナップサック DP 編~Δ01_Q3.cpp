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
    rep(i,n) cin>> a[i];

    vector<vector<bool>> dp(n+1,vector<bool> (m+1,false));
    dp[0][0] = true;

    rep(i,n) rep(j,m+1) {
        if(!dp[i][j]) continue;
        dp[i+1][j] = true;
        if(j+a[i]<=m) dp[i+1][j+a[i]]=true;
    }
	if(dp[n][m]) cout << "Yes" << endl;
    else cout<<"No"<<endl;
	return 0;
}
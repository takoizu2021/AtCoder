#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

int main() {
    int T;
    cin>>T;
    vector<vector<int>> g(T,vector<int> (T));
    rep(i,T) rep(j,T) cin>>g[i][j];
    vector<int> dp(T+10);

    for(int t=1; t<=T+1; ++t) {
        for(int i=0; i<t; ++i) {
            for(int j=i+1; j<t; ++j) {
                dp[t] = max(dp[t], dp[i]+g[i][j-1]);
            }            
        }
    }
    
	cout << dp[T+1] << endl;
	return 0;
}
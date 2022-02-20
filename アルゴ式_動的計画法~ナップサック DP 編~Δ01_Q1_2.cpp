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
	vector<int> a(n);
	rep(i,n) cin>>a[i];
    vector<int> dp(n+1);
    dp[0]=0;
    rep(i,n) {
        dp[i+1] = max(dp[i],dp[i]+a[i]);
    }
    cout<<dp[n]<<endl;
	return 0;
}
#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

int main() {
	int n,a,b;
	cin>>n>>a>>b;
	vector<int> x(n);
	rep(i,n) cin>>x[i];

	vector<vector<bool>> dp(n+1,vector<bool> (a,false));
	dp[0][0] = true;
	rep(i,n) rep(j,a) {
		if(dp[i][j] == false) continue;

		dp[i+1][j] = true;
		dp[i+1][(j+x[i]) % a] = true;
		//cout<<j<<":"<<x[i]<<":"<<(j+x[i]) % a<<"|";
	}
/*
	rep(i,n+1) rep(j,a) {
		cout<<dp[i][j];
		if(j==a-1) cout<<endl;
	}
*/
	if(dp[n][b]) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}
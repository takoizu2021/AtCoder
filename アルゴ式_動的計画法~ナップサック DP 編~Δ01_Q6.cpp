#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 1e9; //10^13
using ll = long long;

int main() {
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> a(n);
	rep(i,n) cin>>a[i];

	vector<vector<int>> dp(n+1,vector<int> (m+1,inf));
	dp[0][0]=0;
	rep(i,n) rep(j,m+1) {
		if(dp[i][j]<0) continue;
		dp[i+1][j] = min(dp[i][j],dp[i+1][j]);
		if(j>=a[i]) dp[i+1][j] = min(dp[i+1][j],dp[i][j-a[i]]+1);
	}

/*
	rep(i,n+1) rep(j,m+1) {
		cout<<dp[i][j]<<" ";
		if(j==m) cout<<endl;
	} 
*/

	if(dp[n][m]<=k)cout << "Yes" << endl;
	else cout<<"No"<<endl;
	return 0;
}
#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

int main() {
	int n;
	cin>>n;
	vector<vector<int>> dp(n,vector<int> (n));
	dp[0][0] = 1;	
	rep(i,n) rep(j,n) {
		if(i>0) dp[i][j] += dp[i-1][j];
		if(j>0) dp[i][j] += dp[i][j-1];
	}
	cout << dp[n-1][n-1] << endl;
	return 0;
}
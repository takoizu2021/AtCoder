#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 1e9; //10^13
using ll = long long;

int main() {
	string s,t;
	cin>>s>>t;
	int ns=s.size();
	int nt=t.size();
	vector<vector<int>> dp(ns+1,vector<int> (nt+1,inf));
	dp[0][0] = 0;
	for(int i=-1; i<ns; ++i) {
	  for(int j=-1; j<nt; ++j) {
		if(i == -1&j == -1) continue; // dp[0][0] は考慮済
		if(i>=0 && j>= 0) {
		  if(s[i]==t[j]) dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j]);
		  else dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j]+1);
		}
		if(i>=0) dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j+1]+1);
		if(j>=0) dp[i+1][j+1] = min(dp[i+1][j+1], dp[i+1][j]+1);
	  }
	}

/*
	rep(i,ns+1) rep(j,nt+1) {
		cout<<dp[i][j]<<":";
		if(j==nt) cout<<endl;
	}
*/
	cout << dp[ns][nt] << endl;
	return 0;
}
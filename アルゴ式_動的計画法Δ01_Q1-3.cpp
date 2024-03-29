#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;

int main() {
	int n;
	cin>>n;

	vector<int> dp(n+1);
	dp[0] = 1; dp[1] = 1;
	for(int i=2; i<=n; ++i) {
		dp[i] = dp[i-1] + dp[i-2];
	}
	cout<<dp[n]<<endl;
	return 0;
}
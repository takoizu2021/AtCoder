#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ðŽæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
const int inf = 1000000;

int main() {
	int n;
	cin>>n;
	vector<vector<int> > a(n,vector<int> (n));
	for(int i=0; i<n; ++i) {
		for(int j=n-1; j>=0; --j) cin>>a[i][j];
	}

	vector<vector<int> > dp(n,vector<int> (n,inf));
	dp[0][0] = a[0][0];
	for(int i=0; i<n; ++i) {
		for(int j=0; j<n; ++j) {
			if(i-1>=0) dp[i][j] = min(dp[i][j], a[i][j]+dp[i-1][j]);
			if(j-1>=0) dp[i][j] = min(dp[i][j], a[i][j]+dp[i][j-1]);
			//cout<<dp[i][j]<<" ";			
		}
		//cout<<endl;
	}

	cout << dp[n-1][n-1] << endl;
	return 0;
}
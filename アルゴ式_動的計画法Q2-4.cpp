#include <bits/stdc++.h>

#include <regex> // ³‹K•\Œ»‚ðŽæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ

using namespace std;


int main() {

	int n;

	cin>>n;

	vector<vector<int> > dp(n,vector<int> (n,0));

	dp[0][0]=1;


	for(int i=0; i<n; ++i) {

		for(int j=0; j<n; ++j) {

			if(i-1>=0) dp[i][j] += dp[i-1][j];

			if(j-1>=0) dp[i][j] += dp[i][j-1];

			//cout<<dp[i][j]<<" ";

		}

		//cout<<endl;

	}

	cout << dp[n-1][n-1] << endl;

	return 0;

}
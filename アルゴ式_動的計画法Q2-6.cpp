#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ðŽæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<vector<int> > a(n,vector<int> (n,0));
	for(int i=0; i<n; ++i) {
		for(int j=0; j<n; ++j) cin>>a[i][j];
	}

	vector<vector<int> > dp(n,vector<int> (n,0));
	dp[0][0]=a[0][0];

	for(int i=0; i<n; ++i) {
		for(int j=0; j<n; ++j) {
			int u=0,l=0;
			if(i-1>=0) u = dp[i-1][j];
			if(j-1>=0) l = dp[i][j-1];
			dp[i][j] = a[i][j] + max(u,l); 
			//cout<<dp[i][j]<<" ";
		}
		//cout<<endl;
	}
	cout << dp[n-1][n-1] << endl;
	return 0;
}
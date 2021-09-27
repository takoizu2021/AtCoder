#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ðŽæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
const int inf = 1000000;

int main() {
	int n,a,b;
	cin>>n>>a>>b;
	vector<int> x(n);
	for(int i=0; i<n; ++i) cin>>x[i];

	vector<vector<bool> > dp(n+1,vector<bool> (a,false));
	dp[0][0]=true;

	for(int i=0; i<n; ++i) {
		for(int j=0; j<a; ++j) {
			if(dp[i][j]==false) continue;
			dp[i+1][j] = true;
			dp[i+1][ (j+x[i])%a ] = true;
		}
	}

	cout << (dp[n][b] ? "Yes" : "No") << endl;
	return 0;
}
#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ðŽæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
const int inf = 1000000;

int main() {
	int n,m;
	cin>>n>>m;
	vector<int> a(n-1);
	vector<int> b(n-1);
	for(int i=0; i<n-1; ++i) cin>>a[i];
	for(int i=0; i<n-1; ++i) cin>>b[i];

	vector<vector<int> > dp(n,vector<int> (m,0));
	vector<vector<bool> > chk(n,vector<bool> (m,0));
	chk[0][0]=true;
	
	for(int i=0; i<n-1; ++i) {
		for(int j=0; j<m; ++j) {
			if(!chk[i][j]) continue;
			chk[i+1][j]=true;
            dp[i+1][j]=max(dp[i+1][j], dp[i][j]);
			if(j+a[i]<m) {
                chk[i+1][j+a[i]]=true;
                dp[i+1][j+a[i]] = max(dp[i+1][j+a[i]], dp[i][j]+b[i]);
            }
		}        
	}
    
	cout << (dp[n-1][m-1] ? dp[n-1][m-1] : -1) << endl;
	return 0;
}
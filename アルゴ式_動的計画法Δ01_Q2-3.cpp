#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

int main() {
	int n;
	cin>>n;
	vector<vector<int> > a(n,vector<int> (3,0));
	rep(i,n) rep(j,3) cin>>a[i][j];
	
	rep2(i,1,n) rep(j,3) {
		if(j==0) a[i][j] += max(a[i-1][j+1],a[i-1][j+2]);
		if(j==1) a[i][j] += max(a[i-1][j-1],a[i-1][j+1]);
		if(j==2) a[i][j] += max(a[i-1][j-2],a[i-1][j-1]);
	}
	int ans = max({ a[n-1][0],a[n-1][1],a[n-1][2] });
	cout<<ans<<endl;
	return 0;
}
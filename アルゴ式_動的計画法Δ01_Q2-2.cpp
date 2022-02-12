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
	vector<vector<int> > a(n+2,vector<int> (n+2,0));

	rep2(i,1,n+1) cin>>a[1][i];

	rep2(i,2,n+1) rep2(j,1,n+1) {
		a[i][j] += a[i-1][j-1];
		a[i][j] += a[i-1][j];
		a[i][j] += a[i-1][j+1];
		a[i][j] = a[i][j]%100;
	}
	cout<<a[n][n]<<endl;
	return 0;
}
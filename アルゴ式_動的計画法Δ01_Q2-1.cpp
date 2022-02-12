#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

int main() {	
	vector<vector<int> > a(4,vector<int> (4,0));

	rep(i,4) cin>>a[0][i];

	rep2(i,1,4) rep(j,4) {
		if(j-1>=0) a[i][j] += a[i-1][j-1];
		a[i][j] += a[i-1][j];
		if(j+1<4) a[i][j] += a[i-1][j+1];
	}
	cout<<a[3][3]<<endl;

	return 0;
}
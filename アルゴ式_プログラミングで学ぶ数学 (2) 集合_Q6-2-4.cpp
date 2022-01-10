#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

int main() {
	int n,x,y;
	cin>>n>>x>>y;

	int ans=0;
	int mx = max(x,y);
	int mn = min(x,y);
	for(int X=1; mx*X<=n; ++X) if((mx*X)%mn == 0) ++ans;
	cout << ans << endl;
	return 0;
}
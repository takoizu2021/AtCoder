#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

int main() {
	int n,m;
	cin>>n>>m;
	vector<int> a(n),b(m);
	rep(i,n) cin>>a[i];
	rep(i,m) cin>>b[i];

	vector<int> ans(1001,0);
	rep(i,n) ans[a[i]]++;
	rep(i,m) ans[b[i]]++;

	rep2(i,1,1001) if(ans[i] != 0) cout<<i<<endl;	
	return 0;
}
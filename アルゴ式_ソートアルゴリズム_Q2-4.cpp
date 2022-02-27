#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 1e9; //10^9
using ll = long long;

int main() {
    int n,k;
    cin>>n>>k;
    vector<ll> a(n);
    rep(i,n) cin>>a[i];
    sort(a.begin(), a.end());
    ll ans = 1e11;
    rep(i,n-(k-1)) ans = min(ans,a[i+k-1]-a[i]);
	cout << ans << endl;
	return 0;
}
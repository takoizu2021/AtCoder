#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;
const ll mod = 1e9;

int main() {
    ll n,x,r;
    cin>>n>>x>>r;

    ll pow_r_n = 1;
    for(int i=0; i<n; ++i) pow_r_n = (pow_r_n*r)%mod;
    ll ans = x * (pow_r_n -1 + mod) % mod;
	cout << ans << endl;
	return 0;
}
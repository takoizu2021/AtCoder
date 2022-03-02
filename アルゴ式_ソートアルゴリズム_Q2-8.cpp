#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 1e9; //10^9
using ll = long long;

int main() {
    ll n,k;
    cin>>n>>k;

    vector<pair<ll,ll>> p(n);
    rep(i,n) {
        int a,b;
        cin>>a>>b;
        p[i] = make_pair(a,b);
    }
    sort(p.begin(),p.end());

    ll res = 0;
    for(int i=0; i<n&&k>0; ++i) {
      int val = min(k,p[i].second);
      res += val*p[i].first;
      k -= val;      
    }
    cout<<res<<endl;
	return 0;
}
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
    vector<int> d(m);
    rep(i,m) cin>>d[i];

    vector<bool> t(n+1,false);
    t[0]=true;
    rep2(i,1,n+1) {
        rep(j,m) {
            if(i-d[j]>=0 && t[i-d[j]]) t[i]=true;
        }
    }
	cout << (t[n]? "Yes":"No") << endl;
	return 0;
}
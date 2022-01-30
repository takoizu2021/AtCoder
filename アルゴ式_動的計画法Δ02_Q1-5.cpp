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
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    vector<int> t(n,inf);
    t[0]=0; t[1]=a[1];
    rep2(i,2,n) {
        rep2(j,1,m+1) {
            if(i-j >= 0) t[i] = min(t[i], t[i-j]+a[i]*j);
        }
    }
	cout << t[n-1] << endl;
	return 0;
}
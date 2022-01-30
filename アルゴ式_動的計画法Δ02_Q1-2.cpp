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
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    vector<int> t(n);
    t[0] = 0, t[1] = a[1];
    rep2(i,2,n) {
        t[i] = min(t[i-1]+a[i], t[i-2]+a[i]*2);
    }
    
	cout << t[n-1] << endl;
	return 0;
}
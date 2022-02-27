#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) = sort(v.begin(), v.end())
const long long inf = 10000000000000; //10^13
using ll = long long;

int main() {
    int n;
    cin>>n;
    vector<double> a(n);
    rep(i,n) cin>>a[i];
    sort(a.begin(), a.end());
    double ans=0;
    if(n%2!=0) ans = a[(n-1)/2];
    else ans = (a[n/2-1]+a[n/2])/2;
    cout<<fixed<<setprecision(10);
    cout<<ans<<endl;
	return 0;
}
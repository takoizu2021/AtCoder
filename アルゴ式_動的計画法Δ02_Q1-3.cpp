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
    vector<int> t(n+1);
    t[0]=1, t[1]=1;
    rep2(i,2,n+1) {
        t[i] = t[i-1] + t[i-2];
    }
	cout << t[n] << endl;
	return 0;
}
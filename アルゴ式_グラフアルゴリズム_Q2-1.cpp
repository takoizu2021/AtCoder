#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

int main() {
	int n,x;
	cin>>n>>x;
    vector<int> a(n);
    for(int i=1; i<n; ++i) {
        cin>>a[i];
    }

    int res=0;
    while(x!=0) {
        res++;
        x = a[x];
    }
	
	cout << res << endl;
	return 0;
}
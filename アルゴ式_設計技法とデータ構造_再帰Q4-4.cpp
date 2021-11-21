#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

ll func(int x, vector<ll> &fib) {
    if(fib[x] != -1) return fib[x];
    else {
        fib[x] = func(x-1,fib) + func(x-2,fib);
        return fib[x];
    }
}

int main() {
    int n;
    cin>>n;

    vector<ll> fib(n+1,-1);
    fib[0] = 0, fib[1] = 1;
	cout << func(n, fib) << endl;
	return 0;
}
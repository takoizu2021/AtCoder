#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

int main() {
    int n,m,x;
    cin>>n>>m>>x;
    vector<vector<int> > g(n);
    rep(i,m) {
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    set<int> f;
    for(auto v : g[x]) f.insert(v);

    set<int> res;
    for(auto v : g[x]) {
        for(int w : g[v]) {
            if(w != x && !f.count(w)) res.insert(w);
        }
    }
	cout << res.size() << endl;
	return 0;
}
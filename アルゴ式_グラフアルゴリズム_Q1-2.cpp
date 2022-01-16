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
    vector<set<int> > graph(n);
    for(int i=0; i<m; ++i) {
        int a,b;
        cin>>a>>b;

        graph[a].insert(b);
    }

    for(int i=0; i<n; ++i) {
        for(auto foll : graph[i]) cout<<foll<<" ";
        cout<<endl;
    }
	return 0;
}
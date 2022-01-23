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
	vector<vector<int> > graph(n);
	rep(i,m) {
		int a,b;
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	int s=-1, max_num=-1;
    rep(i,n) {
        int num = (int) graph[i].size();

        if(max_num < num) {
            max_num = num;
            s = i;
        }
    }
    sort(graph[s].begin(), graph[s].end());
    for(auto f : graph[s]) cout<<f<<endl;
	return 0;
}
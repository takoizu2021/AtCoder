#include <bits/stdc++.h>
#include <regex> // ³‹K•\Œ»‚ğæ‚èˆµ‚¤‚½‚ß‚Ìƒ‰ƒCƒuƒ‰ƒŠ
using namespace std;
const long long inf = 10000000000000; //10^13

int main() {
	int n,m;
	cin>>n>>m;
	vector<int> a(n), b(m);
	for(int j=0; j<n; ++j) cin>>a[j];
	for(int i=0; i<m; ++i) cin>>b[i];

	int res=0;
    vector<bool> use(n,false);
    
    //” ‚Ì¬‚³‚¢‚à‚Ì‚©‚ç‡‚É“ü‚é‰×•¨‚ª‚ ‚é‚©‚ğŒ©‚é
    for(int i=0; i<m; ++i) {
        for(int j=0; j<n; ++j) {
            if(use[j]) continue;

            if(a[j]<=b[i]) {
                ++res;
                use[j] = true;
                break;
            }
        }
    }

	cout << res << endl;
	return 0;
}
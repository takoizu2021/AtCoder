#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
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
    
    //箱の小さいものから順に入る荷物があるかを見る
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
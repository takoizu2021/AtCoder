#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;

const int inf =1000000;
int main() {
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0; i<n; ++i) cin>>a[i];    
    
    vector<int> t(n,inf);
    t[0]=0;
    for(int i=1; i<n; ++i) {
        for(int j=1; j<=m; ++j) {
            if(i-j>=0) {
                t[i] = min(t[i],t[i-j] + a[i]*j);
            }
        }
    }
	cout << t[n-1] << endl;
	return 0;
}
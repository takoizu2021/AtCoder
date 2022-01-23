#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

// グラフを表すデータ構造
using G = vector<vector<int> >;

// 頂点 v を根とする部分木を探索
void rec (int v, const vector<vector<int> > &chs) {
     // 頂点 v を出力
    cout<< v <<" ";

    // 頂点 v の各子頂点を探索
    for(auto ch : chs[v]) {
        // 子頂点 ch を根とした部分木を再帰的に探索
        rec(ch, chs);
    }
}

int main() {
    int n;
    cin>>n;
    vector<vector<int> > chs(n);
    for(int v=1; v<n; ++v) {
        int p;
        cin>>p;

        chs[p].push_back(v);
    }

    rec(0, chs);
    cout<<endl;
	return 0;
}
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
// p := 頂点 v の親
// depth[v] := 頂点 v の深さ
// chs[v] := 頂点 v の子頂点のリスト
void rec (int v, int p, vector<int> &depth,
          vector<vector<int> > &chs) {

    // 頂点 v の深さを求める
    if(v == 0) {
        // 根の場合
        depth[v] = 0;
    }
    else {
        // 根以外の場合は親頂点の深さ + 1
        depth[v] = depth[p] + 1;
    }

    // 頂点 v の各子頂点を探索
    for(auto ch : chs[v]) {
        // 子頂点 ch を根とした部分木を再帰的に探索
        // 子頂点 ch の親は v である
        rec(ch, v, depth, chs);
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

    // 根頂点 (0) から再帰的に探索する
    // 根頂点 0 の親は便宜的に -1 とする
    vector<int> depth (n,0);
    rec(0,-1,depth,chs);

    int res=0;
    for(auto d : depth) res = max(res,d);
    cout<<res<<endl;

	return 0;
}
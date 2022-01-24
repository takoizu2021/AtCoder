#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

// 頂点 v を根とする部分木を探索
// p := 頂点 v の親
// siz[v] := 頂点 v を根とする部分木のサイズ
// chs[v] := 頂点 v の子頂点のリスト
void rec(int v, int p, vector<int> &siz,
         vector<vector<int> > &chs) {
     // 頂点 v の各子頂点を探索
     for (auto ch : chs[v]) {
        // 子頂点 ch を根とした部分木を再帰的に探索
        // 子頂点 ch の親は v である
        rec(ch, v, siz, chs);
     }

    // 帰りがけ時に答えを合算する
    siz[v] = 1;
    for (auto ch : chs[v]) {
        siz[v] += siz[ch];
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
    vector<int> siz(n,0);
    rec(0,-1,siz,chs);

	for(auto s : siz) cout << s -1 <<endl;
	return 0;
}
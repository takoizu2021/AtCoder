#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 1e9; //10^9
using ll = long long;

int main() {
	int n;
	cin>>n;
	vector<int> a(n);
	rep(i,n) cin>>a[i];

    //aをコピーしたbをつくる
    vector b = a;

    //bを昇順でソート
	sort(b.begin(), b.end());

    //bの重複を削除
    b.erase(unique(b.begin(), b.end()), b.end());

    //for(auto v : b) cout<<v<<":";

    // 座標圧縮した結果を求める(lower_boundを使う)
    // ※lower_bound : 値が a[i] になるような配列 B 上の
    //   イテレータを返す処理を行っています。
    //   これから B の先頭のイテレータを返す B.begin() を引くことで、
    //   「a[i] が B の中で何番目の要素に相当するか」が求められます。
    int na = a.size();
    vector<int> res(na);
    for(int i=0; i<na; ++i) {
      res[i] = lower_bound(b.begin(), b.end(), a[i]) -b.begin();
    }

    for(auto v:res) cout<<v<<endl;

	return 0;
}
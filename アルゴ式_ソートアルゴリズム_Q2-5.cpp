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
	sort(b.rbegin(), b.rend());

    //bの重複を削除
    b.erase(unique(b.begin(), b.end()), b.end());

    //for(auto v : b) cout<<v<<":";

    // B の各要素が何番目かを連想配列に求めていく
    map<int,int> order;
    for(int i=0; i<b.size(); ++i) {
        order[b[i]] = i;
    }

    // 再び A の各要素の順位を求めていく
    for(auto A:a) cout<<order[A]<<endl;

	return 0;
}
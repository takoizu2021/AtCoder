#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

// 再帰関数 (N = n, L = l, R = r のときの問題の答え)
vector<vector<int> > func(int n, int l, int r) {
    // l > r のとき、空配列を返却する
    if(l > r) return {};

    // n = 0 のとき、空配列の入った空配列を返却する
    if(n == 0) return {{}};

    // それ以外のとき、問題文の通りに答えを作成する
    vector<vector<int> > ans;
    // n-1 番目の要素として l を選んだ場合
    for (auto x : func(n-1,l,r)) {
        vector<int> to = {l};
        to.insert(to.end(), x.begin(), x.end());
        ans.push_back(to);  
    }

    // l を選ばなかった場合
    for(auto x: func(n,l+1,r)) {
        ans.push_back(x);
    }

    return ans;
}

int main() {
	int n,l,r;
	cin>>n>>l>>r;

    vector<vector<int> > ans = func(n,l,r);
    for(vector<int> x : ans) {
        int mx = x.size();
        for(int i=0; i<mx; ++i) {
            cout << x[i];
            if(i!=x.size()-1) cout<<" ";
            else cout<<endl;
        }
    }

}
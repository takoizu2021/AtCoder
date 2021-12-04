#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

vector<vector<int> > memo;

vector<int> a;

// 再帰関数 (A の前から i 個の中からいくつか選んで j を作れるか)
int func (int i, int j) {
    // 過去に計算済みの場合メモに記録された値を返す
    if(memo[i][j] != -1) return memo[i][j];
    // i = 0 のとき、 j = 0 なら true
    if(i==0) return memo[i][j] = j==0;

    // それ以外のとき、問題文の通りに判定する
    int flg = 0;
    memo[i][j]=0;
	if(j>=a[i-1] && func(i-1,j-a[i-1])==1) return flg=1;
	if(func(i-1,j)==1) flg=1;

	return flg;
}

int main() {
	int n,x;
	cin>>n>>x;
	a.resize(n);
	rep(i,n) cin>>a[i];

    memo.resize(n+1,vector<int> (x+1,-1));

    string ans = func(n,x) == 1 ? "Yes":"No";
    cout<<ans<<endl;
	return 0;
}
#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

// 再帰関数 (N = n, L = l, R = r のときの問題の答え)
int func(int n, int l, int r) {
    // n = 0 のとき、答えは空配列のみ (1 つ)
    if(n == 0) return 1;

    // l > r のとき、答えは存在しない
    if(l > r) return 0;

    // それ以外のとき
    int ans = func(n-1,l+1,r) + func(n,l+1,r);
    //cout<<"n:" <<n <<" l:" <<l <<" r:" <<r<<" ans"<<ans<<endl;

    return ans;
}

int main() {
    int n,l,r;
    cin>>n>>l>>r;

    int ans = func(n,l,r);

    cout<<ans<<endl;
	return 0;
}
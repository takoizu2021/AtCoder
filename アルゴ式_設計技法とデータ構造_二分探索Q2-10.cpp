#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 10000000000000; //10^13
using ll = long long;

ll f (ll n, ll k) {
    ll count = 0;   
    rep(i,n) {
        count += min(n,k/(i+1));
    }
    return count;
}


int main() {
	long long n,x;
	cin>>n>>x;

    // 二分探索
    ll left=1, right=n*n;    
    while(left!=right) { // 解が求まるまで
        // left と right の 中点 mid をとる
        ll mid = (left+right)/2;
        if(f(n,mid) >= x) { // もし f(mid) >= X ならば答えは left 以上 mid 以下
            right = mid; // 範囲を狭める
        }
        else {// そうでなければ答えは mid+1 以上 right 以下
            left = mid+1; // 範囲を狭める
        }
    }

  // 答えは left 以上 right 以下であることがわかっている。
  // left = right なので、答えは left である。
    ll ans = left;
	cout << ans << endl;
	return 0;
}
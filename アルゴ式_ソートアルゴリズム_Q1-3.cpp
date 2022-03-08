#include <bits/stdc++.h>
#include <regex> // 正規表現を取り扱うためのライブラリ
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
const long long inf = 1e9; //10^9
using ll = long long;

void pri(int n, vector<int> a) {
	rep(i,n) {
		cout<<a[i];
		if(i!=n-1) cout<<" ";
		else cout<<endl;
	}
	return;
}

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];

    //k=1,2,?,N?1 について次の処理を行う。
    rep2(k,1,n) {
      //1.変数 pos に k を代入する。
      int pos = k;
      //2.pos/=0 かつ A[pos?1]>A[pos] の間以下を繰り返す。
      //  なお、この処理が終了した時点で A[0],A[1],?,A[k] は昇順になる。      
      while(pos!=0 && a[pos-1]> a[pos]) {
          //2-1.pos/=0 かつ A[pos?1]>A[pos] の間以下を繰り返す。
          swap(a[pos-1],a[pos]);
          //2-2.pos の値を 1 減らす
          pos--;
      }

      pri(n,a);      
    }
	return 0;
}
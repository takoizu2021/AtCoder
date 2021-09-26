#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000;
using ll = long long;

int main() {
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i=0; i<n; ++i) cin>>a[i];
  
  //縦n、横0~9の二次元配列を作る => ありえる操作の数を数える配列
  vector<vector<ll> >dp(n,vector<ll> (10,0));
  //初期値としてdp[0][j]のj=a[0]を1にする => 1は最初にありえる数
  dp[0][a[0]]=1;
  
  for(int i=0; i<n-1; ++i) {
    for(int j=0; j<10; ++j) {
      //dp[i+1][j]に対して、操作数が0でないdp[i][j]にa[i+1]を乗算と加算の処理をした結果の
      //jにdp[i][j]の操作数を追加していく。
      if(dp[i][j]>0) dp[i+1][(j+a[i+1])%10] += (dp[i][j])%998244353;
      if(dp[i][j]>0) dp[i+1][(j*a[i+1])%10] += (dp[i][j])%998244353;      
    }
  }
  
  /*
  for(int i=0; i<n; ++i) {
    for(int j=0; j<10; ++j) {      
      cout<<dp[i][j]<<" ";
    }
    cout<<endl;
  }
  */
  
  //a配列の最後までの操作をした操作数の結果に除算処理%998244353をして出力する
  for(int i=0; i<10; ++i) cout<<dp[n-1][i]%998244353<<endl;  
}
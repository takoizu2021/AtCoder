#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000; //10^9
using ll = long long;

int main() {
  int n,m;
  cin>>n>>m;
  vector<vector<ll> > B(n,vector<ll> (m));
  rep(i,n) rep(j,m) cin>>B[i][j];
  
  bool ans = true;
  vector<ll> chk(m);
  rep(i,m) chk[i] = B[0][i]%7;
  rep(i,m-1) {
    //cout<<chk[i]<<endl;
    if(0==chk[i]) ans = false;
  }
  
  rep(i,n) rep(j,m) {
    if(B[i][j] != B[0][0]+j+i*7) ans = false;
  }
  
  cout<<(ans ? "Yes":"No")<<endl;
}
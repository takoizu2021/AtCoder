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
  int h,w;
  cin>>h>>w;
  vector<vector<ll> > A(h,vector<ll> (w));
  rep(i,h) rep(j,w) cin>>A[i][j];
  
  bool ans = true;
  rep(i,h-1) {
    rep(j,w-1) {
      if(A[i][j]+A[i+1][j+1] > A[i+1][j]+A[i][j+1]) ans = false;
    }
  }
  
  if(ans) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}
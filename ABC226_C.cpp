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
  int n;
  cin>>n;
  vector<int> T(n),K(n);
  vector<vector<int> > A(n);
  rep(i,n) {
    cin>>T[i]>>K[i];
    A[i] = vector<int> (K[i]);
    rep(j,K[i]) {
      cin>>A[i][j];
      --A[i][j];
    }
  }
  vector<bool> chk(n,false);
  chk[n-1] = true;
  for(int i=n-1; i>=0; --i) {
    if(chk[i]) {
      for(int j : A[i]) chk[j] = true;
    }
  }
  ll ans=0;
  rep(i,n) if(chk[i]) ans += T[i];
  
  cout<<ans<<endl;
}
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000; //10^9
const int mod=998244353;
using ll = long long;
//Å‘åŒö–ñ” gcd(A,B)

int main() {
  int n;
  cin>>n;
  
  map<ll,ll> m;
  for(int i=1; i<=9; ++i) m[i]++;
  
  ll ans = 0;
  rep2(j,1,n) {
    map<ll,ll> res;
    for(int i=1; i<=9; ++i) res[i] = m[i]%mod;
    
    for(int i=1; i<=9; ++i) {
      if(1<i && i<9) {        
        m[i+1] += res[i];
        m[i-1] += res[i];
      }
      if(i==1) m[i+1] += res[i];
      if(i==9) m[i-1] += res[i];
    }
  }
  
  for(int i=1; i<=9; ++i) {
    //cout<<m[i]<<endl;
    ans = (ans+m[i])%mod;
  }
  cout<<ans<<endl;
}
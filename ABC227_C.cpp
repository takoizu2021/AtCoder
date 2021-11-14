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
  ll n;
  cin>>n;
  
  ll ans = 0;
  for(ll a=1; a*a*a<=n; ++a) {
    for(ll b=a; a*b*b<=n; ++b) {
      ll maxc=n/(a*b);
      //cout<<maxc<<":"<<maxc-b+1<<endl;
      ans += maxc-b+1;
    }
  }
  cout<<ans<<endl;
}
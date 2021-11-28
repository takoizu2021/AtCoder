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
  ll n,w;
  cin>>n>>w;
  
  vector<pair<ll,ll>> v(n);
  rep(i,n) cin>>v[i].first>>v[i].second;
  
  sort(v.rbegin(),v.rend());
  
  ll ans=0;
  rep(i,n) {
    ans += v[i].first*min(w,v[i].second);
    w   -= min(w,v[i].second);
  }
  
  cout<<ans<<endl;
  
}
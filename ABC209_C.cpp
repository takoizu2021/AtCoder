#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  vector<ll> c(n);
  rep(i,n) cin>>c[i];
  sort(c.begin(),c.end());
  
  ll mod=1000000007;
  ll ans=1;
  for(int i=0; i<n; i++) {
    if(c[i]-i < 0) {
      ans = 0;
      break;
    }
    ans = ans*(c[i]-i)%mod;
  }
  cout<<ans<<endl;  
}
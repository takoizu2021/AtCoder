#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  int mod=10007;
  vector<ll> a(n);
  if(1<=n) a[0]=0;
  if(2<=n) a[1]=0;
  if(3<=n) a[2]=1;
  rep2(i,3,n) {
    a[i] = a[i-1]%mod +a[i-2]%mod +a[i-3]%mod;
    //cout<<i<<":"<<a[i]<<endl;
  }
  ll ans=a[n-1] % mod;
  
  cout<<ans<<endl;
}
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  ll a,b,c;
  cin>>a>>b>>c;
  
  ll mod = 1000000007;
  ll ans = a%mod*b%mod*c%mod;
  cout<<ans<<endl;
}
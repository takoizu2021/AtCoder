#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int a,b,c,k;
  cin>>a>>b>>c>>k;
  int s,t;
  cin>>s>>t;
  
  int ans= a*s + b*t;
  int tot = s+t;
  if(tot >= k) ans -= tot*c;
  
  cout<<ans<<endl;
}
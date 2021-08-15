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
  
  vector<ll> s(n);
  vector<ll> t(n);
  
  rep(i,n) cin>>s[i];
  rep(i,n) cin>>t[i];
  
  vector<ll> ans(n);
  
  
  rep(i,n) {
    if(i==0) ans[0]=min(t[0],ans[n-1]+s[n-1]);
    else ans[i]=min(t[i],ans[i-1]+s[i-1]);
  }
  rep(i,n) {
    if(i==0) ans[0]=min(t[0],ans[n-1]+s[n-1]);
    else ans[i]=min(t[i],ans[i-1]+s[i-1]);
  }
  
  rep(i,n) cout<<ans[i]<<endl;
}
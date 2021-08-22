#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  ll n;
  cin>>n;
  
  ll k=2, ans=1;
  if(n==1) ans=0;
  else {
    while(k<=n) {
      ans++;
      k*=2;
      //cout<<ans<<":"<<k<<endl;
    }
    ans--;
  }
  
  cout<<ans<<endl;  
}
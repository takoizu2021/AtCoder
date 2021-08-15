#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int s,t;
  cin>>s>>t;
  
  int n=101, ans=0;
  rep(i,n) {
    rep(j,n) {
      rep(k,n) {        
        //cout<<i<<" "<<j<<" "<<k<<endl;
        if(i+j+k<=s && i*j*k<=t) ans++;
      }
    }
  }
  
  cout<<ans<<endl;
}
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
  int h,w,r,c;
  cin>>h>>w>>r>>c;
  
  int ans = 0;
  if(h==1&&w==1) ans=0;
  else if(h==1) {
    if(c==1||c==w) ans=1;
    else ans=2;
  }
  else if(w==1) {
    if(r==1||r==h) ans=1;
    else ans=2;
  }
  else if(r==1||r==h) {
    if(c==1||c==w) ans=2;
    else ans=3;
  }
  else if(c==1||c==w) {
    ans=3;
  }
  else ans=4;
  
  cout<<ans<<endl;  
}
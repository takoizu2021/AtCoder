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
  int n,a,b;
  cin>>n>>a>>b;
  
  string s="",t="";
  rep(i,n) rep(j,b) {
    if(i%2==0) {
      s+=".";
      t+="#";
    }
    else {
      s+="#";
      t+=".";
    }
  }
  
  rep(i,n) rep(j,a) {
    if(i%2==0) cout<<s<<endl;
    else cout<<t<<endl;
  }
}
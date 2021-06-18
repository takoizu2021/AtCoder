#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  vector<ll> a(n);
  rep(i,n) cin>>a[i];
  
  ll tot=1;
  
  rep(i,n) if(a[i] == 0) tot = 0;
  
  ll ma=1;
  rep(i,18) ma *= 10;
  
  if(tot != 0) {
    rep(i,n) {
      if(ma/tot < a[i]) {
        tot = -1;
        break;
      }
      else tot *= a[i];
    }
  }
  cout<<tot<<endl;
}
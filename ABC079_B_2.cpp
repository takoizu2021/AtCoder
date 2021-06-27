#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  ll ans, l0 = 2, l1 = 1;
  if(n == 1) ans = l1;
  else {
    for(int i=2; i<=n; i++) {
      ans = l0 + l1;
      l0 = l1; l1 = ans;
        //cout<<ans<<endl;
    }
  }
  
  cout<<ans<<endl;
}
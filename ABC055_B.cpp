#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  ll ans = 1;
  
  for(int i=1; i<=n; i++) {
    ans = (ans*i) % 1000000007;
     //if(i<=30) cout<<ans<<endl;
  }
  
  cout<<ans<<endl;
}
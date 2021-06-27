#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  ll a,b,x;
  cin>>a>>b>>x;
    
  ll ans = b/x - a/x;
  if(a % x == 0) ans++;
  cout<<ans<<endl;
}
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  ll a,b,c,d;
  cin>>a>>b>>c>>d;
  
  ll ac = a * c;
  ll ad = a * d;
  ll bc = b * c;
  ll bd = b * d;  
  ll ans = max(ac,max(ad,max(bc,bd)));
  
  cout<<ans<<endl;
}
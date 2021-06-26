#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  ll a,b,c,d;  
  cin>>a>>b>>c>>d;
  
  ll ans=0;
  if(b >= c*d) ans = -1;
  else {
    while(a+b*ans > c*ans*d) ans++;
  }
  cout<<ans<<endl;
}
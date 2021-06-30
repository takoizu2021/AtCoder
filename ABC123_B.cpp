#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  vector<int> v(5);
  rep(i,5) cin>>v[i];
  
  int tm=0;
  rep(i,5) {
    if(v[i] % 10 == 0) tm += v[i];
    else tm += v[i] + (10-v[i]%10);
  }
  
  int ans = tm;
  rep(i,5) {
    if(v[i] % 10 != 0) ans = min(ans,tm-(10-v[i]%10));
  }
  
  cout<<ans<<endl;
    
}
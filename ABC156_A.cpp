#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n,r;
  cin>>n>>r;
  
  int ans = 0;
  if(10 <= n) ans = r;
  else ans = r + (100*(10-n));
  
  cout<<ans<<endl;
}
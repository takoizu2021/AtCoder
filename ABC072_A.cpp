#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int x,t;
  cin>>x>>t;
  
  int ans = x-t;
  if(ans <= 0) ans = 0;
  
  cout<<ans<<endl;
}
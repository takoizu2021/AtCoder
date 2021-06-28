#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int p,q,r;
  cin>>p>>q>>r;
  
  int ans = p+q+r - max(p,max(q,r));
  
  cout<<ans<<endl;  
}
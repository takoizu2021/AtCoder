#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int w,a,b;
  cin>>w>>a>>b;
  
  int ans = 0;
  if(b+w < a) ans = a-(b+w);
  else if(a+w < b) ans = b-(a+w);
  cout<<ans<<endl;
}
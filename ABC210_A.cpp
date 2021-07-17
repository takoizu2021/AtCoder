#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n,a,x,y;
  cin>>n>>a>>x>>y;
  
  int ans=0;
  if(a>=n) ans=x*n;
  else ans=(a*x)+((n-a)*y);
  
  cout<<ans<<endl;
}
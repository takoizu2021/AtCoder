#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int al,bl,cr,dr;
  cin>>al>>bl>>cr>>dr;
  
  string ans;
  int l = al+bl, r = cr+dr;
  if(l == r) ans = "Balanced";
  else if(l > r) ans = "Left";
  else if(l < r) ans = "Right";
  
  cout<<ans<<endl;
    
}
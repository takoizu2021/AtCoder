#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int r;
  cin>>r;
  
  string ans;
  if(r < 1200) ans = "ABC";
  else if(r < 2800) ans = "ARC";
  else ans = "AGC";
  
  cout<<ans<<endl;
}
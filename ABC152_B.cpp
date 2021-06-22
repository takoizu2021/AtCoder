#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int a,b;
  cin>>a>>b;
  
  string ab, ba;
  
  rep(i,b) ab += to_string(a);
  rep(i,a) ba += to_string(b);
  
  string ans = min(ab,ba);
  
  cout<<ans<<endl;
}
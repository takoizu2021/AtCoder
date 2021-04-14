#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int a,b,c;
  cin>>a>>b>>c;
  
  int ans = 3;
  if (a == b || a == c || b == c) ans = 2;
  if (a == b && a == c) ans = 1;
  cout<<ans<<endl;
}
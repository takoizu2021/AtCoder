#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int a,b,c;
  cin>>a>>b>>c;
  
  string ans = "No";
  if(a == b&&b != c) ans = "Yes";
  if(a != b&&b == c) ans = "Yes";
  if(a == c&&c != b) ans = "Yes";
  cout<<ans<<endl;
}
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int h,n;
  cin>>h>>n;
  
  int a;
  string ans="Yes";
  
  rep(i,n) {
    cin>>a;
    h -= a;
  }
  if(h > 0) ans = "No";
  cout<<ans<<endl;
}
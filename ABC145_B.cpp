#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n; string s;
  cin>>n>>s;
  
  string ans="Yes";
  
  if(n % 2!=0) ans = "No";
  else {
    rep(i,n/2) {
      if(s[i] != s[n/2+i]) ans = "No";
    }
  }
  
  cout<<ans<<endl;
}
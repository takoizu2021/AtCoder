#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n; string s;
  cin>>n>>s;
  
  int ct=0;
  rep(i,n) {
    if(s[i]=='1') {
      ct++;
      break;
    }
    else ct++;
  }
  
  string ans;
  if(ct%2!=0) ans="Takahashi";
  else ans="Aoki";
  
  cout<<ans<<endl;
}
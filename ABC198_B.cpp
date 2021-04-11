#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string n;
  cin>>n;
  
  string ans="Yes";
  rep(i,n.size()) if(n[0] != n[i]) ans="No";
  if(ans == "No") {
    string s  = n;
    rep(i,n.size()) {
      //cout<<n[n.size()-(1+i)]<<" ";
      if(n[n.size()-(1+i)] == '0') s = "0" + s;
      else break;
    }
    //cout<<s<<endl;
    string sr = s;
    reverse(sr.begin(),sr.end());
    if(s == sr) ans="Yes";
  }
  cout<<ans<<endl;
}
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n,m;
  cin>>n>>m;
  
  vector<string> na(n);
  vector<string> ma(m);
  rep(i,n) cin>>na[i];
  rep(j,m) cin>>ma[j];
  
  string ans="No";
  int ct=0;
  for(int i=0; i<=n-m; i++) {
    for(int j=0; j<=n-m; j++) {
      for(int k=0; k<m; k++) {
        string nm = na[i+k].substr(j,m);
        if(nm == ma[k]) ct++;
      }
      if(ct == m) {
        ans="Yes";
        break;        
      }
      else ct=0;
    }
    if(ans == "Yes") break;
  }
  cout<<ans<<endl;
  
}
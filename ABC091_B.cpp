#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  vector<string> s(n);
  rep(i,n) cin>>s[i];
  int m;
  cin>>m;
  vector<string> t(m);
  rep(i,m) cin>>t[i];
  
  int ct, ans=0;
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) if(s[i] == s[j]) ct++;
    for(int k=0; k<m; k++) if(s[i] == t[k]) ct--;
    ans = max(ans,ct);
    ct=0;
  }
  cout<<ans<<endl;  
}
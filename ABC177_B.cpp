#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string s,t;
  cin>>s>>t;
  
  s.substr(0,t.size());
  
  int slen=s.size();
  int tlen=t.size();
  
  int ans=tlen;
  for(int i=0; i<=slen-tlen; i++) {
    int ct=0;
    for(int j=0; j<tlen; j++) if(t[j] != s[i+j]) ct++;
    ans = min(ans,ct);
  }
  cout<<ans<<endl;
}
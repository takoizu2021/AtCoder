#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string s;
  cin>>s;
  
  int ans = 0;
  int ct = 0;
   
  rep(i,s.size()) {
    if(s[i] == 'A' || s[i] == 'C'|| s[i] == 'G' || s[i] == 'T') {
      ct++;
    }
    else {
      ans = max(ans,ct);
      ct = 0;
    }
  }
  ans = max(ans,ct);
  cout<<ans<<endl;
}
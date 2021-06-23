#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  string s,t;
  cin>>n>>s>>t;

  string ans;
  int s_ct=0, t_ct=0;
  rep(i,2*n) {
    if(i == 0||i % 2==0) {
      ans += s[s_ct];
      s_ct++;
    }
    else {
      ans += t[t_ct];
      t_ct++;
    }
  }
  
  cout<<ans<<endl;
}
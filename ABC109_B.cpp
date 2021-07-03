#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  vector<string> w(n);
  rep(i,n) cin>>w[i];
  
  string ans = "Yes";
  rep2(i,1,n) {
    rep(j,i) {
      if(w[i] == w[j]) {
        ans = "No";
      }
    }
    if(w[i-1][w[i-1].size()-1] != w[i][0]) ans = "No";
  }
  cout<<ans<<endl;
  
}
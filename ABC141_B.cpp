#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string s;
  cin>>s;
  
  string ans = "Yes";
  
  rep(i,s.size() ) {
    if(i == 0||i % 2 == 0) {
      if(s[i] == 'L') {
        ans = "No";
        break;
      }
    }
    else {
      if(s[i] == 'R') {
        ans = "No";
        break;
      }
    }
  }
  cout<<ans<<endl;
}
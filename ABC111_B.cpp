#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int x;
  cin>>x;
  
  int ans;
  for(int i=x; i<=999; i++) {
    string s = to_string(i);
    if(s[0] == s[1]&&s[0] == s[2]) {
      ans = i;
      break;
    }
  }
  cout<<ans<<endl;
  
}
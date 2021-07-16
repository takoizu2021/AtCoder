#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string s;
  cin>>s;
  
  int a=0,z=0;
  rep(i,s.size()) {
    if(s[i] != 'A') a++;
    else break;
  }
  rep(i,s.size()) {
    if(s[s.size()-(1+i)] != 'Z') z++;
    else break;
  }
  int ans = s.size();
  ans -= a+z;
  
  cout<<ans<<endl;
}
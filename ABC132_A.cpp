#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string s;
  cin>>s;
  
  sort(s.begin(),s.end());
  string ans = "No";
  if(s[0] != s[2] && 
     s[0] == s[1] && s[2] == s[3]) ans = "Yes";
  
  cout<<ans<<endl;
}
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string s,t;
  cin>>s>>t;
  
  string ans = "No";
  if(s == t.substr(0,t.size()-1)) ans = "Yes";
  
  //cout<<t.substr(0,t.size()-1)<<endl;
  cout<<ans<<endl;
}
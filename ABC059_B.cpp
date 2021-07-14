#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string a,b;
  cin>>a>>b;
  
  string ans;
  if(a == b) ans= "EQUAL";
  
  else if(a.size() > b.size()) ans="GREATER";
  else if(a.size() < b.size()) ans="LESS";
  else if(a.size() == b.size()){
    if(a > b) ans="GREATER";
    else if(a < b) ans="LESS";
  }
  cout<<ans<<endl;
}
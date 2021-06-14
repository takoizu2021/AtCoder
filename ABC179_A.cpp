#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string s;
  cin>>s;
  
  //cout<<s[s.size()-1]<<endl;
  if(s[s.size()-1] == 's') s += "es";
  else s += "s";
  
  cout<<s<<endl;
}
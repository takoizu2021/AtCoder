#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string s;
  cin>>s;
  
  int ans=0;  
  while(s.size() > 0) {
    s = s.erase(s.size()-2);
    string zen = s.substr(0,s.size()/2);
    string kou = s.substr(s.size()/2,s.size()/2);
      //cout<<zen<<":"<<kou<<endl;
    if(zen == kou) {      
      ans=s.size();
      break;
    }
  }
  cout<<ans<<endl;
}
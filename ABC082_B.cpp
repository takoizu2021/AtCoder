#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string s,t;
  cin>>s>>t;
  
  sort(s.begin(),s.end());
  sort(t.begin(),t.end());
  reverse(t.begin(),t.end());
  
  bool ts = false;
  int chk = t.find(s);
  if(chk != -1) ts = true;  
  
  string ans = "No";
  if( (s.size()<t.size()&&ts==true) || s<t) ans = "Yes";
  
  cout<<ans<<endl;
    
}
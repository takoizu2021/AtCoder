#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int a,b; string s;
  cin>>a>>b>>s;
  
  string ans = "Yes";
  rep(i,s.size()) {
    if(i<a||a<i) if(!('0'<=s[i]&&s[i]<='9')) ans = "No";
    if(i==a) if(!(s[i] == '-')) ans = "No";
  }
  cout<<ans<<endl;
    
}
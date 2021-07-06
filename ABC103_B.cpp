#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string s,t;
  cin>>s>>t;
  
  int n=s.size();
  string ans = "No";
  
  for(int i=0;i<n;i++) {
    s = s.substr(n-1,1) + s.substr(0,n-1);
    //cout<<s<<endl;
    if(s == t) ans = "Yes";
  }
  cout<<ans<<endl;
}
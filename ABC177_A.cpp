#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int d,t,s;
  cin>>d>>t>>s;
      
  string ans = "No";
  if(d <= s*t) ans = "Yes";
  cout<<ans<<endl;
}
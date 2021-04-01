#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  string n;
  cin>>n;
  
  string ans = "No";
  if     (n[0] == n[1] && n[0] == n[2]) ans = "Yes";
  else if(n[1] == n[2] && n[1] == n[3]) ans = "Yes";
  
  cout<<ans<<endl;  
}
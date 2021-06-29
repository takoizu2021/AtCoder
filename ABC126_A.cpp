#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n,k; string s;
  cin>>n>>k>>s;
  
  string ans = s;
  ans[k-1] = ans[k-1] + 32;
  
  cout<<ans<<endl;
}
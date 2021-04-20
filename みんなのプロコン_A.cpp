#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n,k;
  cin>>n>>k;
  
  int ct=0;
  for(int i=1;i<=n;i += 2) {
    ct++;
  }
  string ans="NO";
  if(ct >= k) ans="YES";
  cout<<ans<<endl;
}
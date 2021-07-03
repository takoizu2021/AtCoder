#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  int ct=0, ans=0;
  for(int i=1; i<=n; i+=2) {
    ct = 0;
    for(int j=1; j<=i; j+=2) {
      if(i % j == 0) ct++;
      //cout<<i<<":"<<j<<" ";
    }
    if(ct == 8) ans++;
  }
  
  cout<<ans<<endl;
}
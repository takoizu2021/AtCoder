#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int x;
  cin>>x;
  
  int a, ans=1;
  if(x > 1) {
    for(int i=2; i*i<=x; i++) {
      a = i;
      for(int j=2; a*i<=x; j++) {
        a *= i;
        //cout<<i<<":"<<j<<":"<<a<<endl;
      }
      ans = max(ans,a);
    }
  }
  cout<<ans<<endl;
}
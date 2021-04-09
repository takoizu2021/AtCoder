#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n,k;
  cin>>n>>k;
  
  int ans=1;
  rep(i,n) {
    if(ans > k) ans += k;
    else ans *= 2;
  }
  cout<<ans<<endl;
}
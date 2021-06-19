#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n,m;
  cin>>n>>m;
  
  int sum = 0, a;
  rep(i,m) {
    cin>>a;
    sum += a;
  }
  int ans = n-sum;
  if(ans < 0) ans = -1;
  cout<<ans<<endl;
}
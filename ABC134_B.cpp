#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n,d;
  cin>>n>>d;
  
  int ans = 1;
  for(int i=1;i*(2*d+1)<n; i++) {
    ans++;
  }
  
  cout<<ans<<endl;
}
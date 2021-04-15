#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  int maxa = 0;
  vector<int> a(n);
  rep(i,n) {
    cin>>a[i];
    maxa = max(maxa,a[i]);
  }
  
  int gnd=0; int gnd_max=0; int ans=0;
  for(int i=2;i<=maxa;i++) {
    int k=i;
    rep(j,n) {
      if(a[j] % k == 0) gnd++;
    }
    //cout<<k<<" "<<gnd<<endl;
    if(gnd >= gnd_max) {
      gnd_max = gnd;
      ans = k;
    }
    gnd = 0;
  }
  cout<<ans<<endl;
}
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  vector<int> p(n);
  rep(i,n) {
    cin>>p[i];
  }
    
  vector<int> nmax(200001);
  int ans=0;
  int mx=0;
  rep(i,n) {
    nmax[p[i]] = p[i];
    mx         = max(mx,p[i]);
    if(p[i] == ans) {
      for(int j=ans+1;j<=mx+1;j++) {
        if(nmax[j] == 0) {
          ans = j;
          break;
        }
      }
    }
    cout<<ans<<endl;
  }
}
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000; //10^9
using ll = long long;

int main() {
  ll n,a,b;
  cin>>n>>a>>b;
  ll p,q,r,s;
  cin>>p>>q>>r>>s;
  int h = q-p+1;
  int w = s-r+1;
  
  vector<string> ans(h, string (w,'.'));
  
  rep(i,h) rep(j,w) {
    //ÀÛ‚ÌÀ•W‚ğİ’è
    ll x=p+i, y=r+j;
    //
    if(x-y == a-b || x+y == a+b) ans[i][j] = '#';
  }
  rep(i,h) cout<<ans[i]<<endl;
}
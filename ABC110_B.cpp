#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n,m,x,y;
  cin>>n>>m>>x>>y;
  
  vector<int> xn(n);
  vector<int> ym(m);
  
  int xmx=-101, ymn=101;
  rep(i,n) {
    cin>>xn[i];
    xmx = max(xmx,xn[i]);
  }
  rep(i,m) {
    cin>>ym[i];
    ymn = min(ymn,ym[i]);
  }
  
  bool chk = false;
  for(int z=x+1; z<=y; z++) {
    if(xmx<z && z<=ymn) {
      chk = true;
      //cout<<xmx<<" "<<ymn<<" "<<z<<endl;
    }
  }
  string ans = "War";
  if(chk == true) ans = "No War";
  
  cout<<ans<<endl;
}
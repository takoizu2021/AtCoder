#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int x,y; //x“ª”Ay‘«‘”
  cin>>x>>y;
  
  string ans = "No";
  rep(i,x+1) {
    rep2(j,x-i,x+1-i) {
      int tsuru = i * 2;
      int kame  = j * 4;
      //cout<<i<<" "<<j<<" "<<tsuru+kame<<endl; 
      if(y == tsuru+kame) ans = "Yes";
    }
  }
  cout<<ans<<endl;
}
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  double sx,sy,gx,gy;
  cin>>sx>>sy>>gx>>gy;
  
  double ans = ((sx*gy)+(gx*sy))/(sy+gy);
  
  cout<<fixed<<setprecision(6);
  cout<<ans<<endl;
}
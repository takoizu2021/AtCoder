#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  double n,m;
  cin>>n>>m;
  
  if(n>12) n-=12;
    
  double nka= n*360/12 + m*360/12/60;
  double mka= m*360/60;
  
  double ans = abs(mka - nka);
  if(ans>180) ans=360-ans;
  
  cout << fixed << setprecision(4);  
  //cout<<mka<<" "<<nka<<endl;
  cout<<ans<<endl;
}
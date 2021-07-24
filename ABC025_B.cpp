#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int n,a,b;
  cin>>n>>a>>b;
  
  string s; int d;
  int ans=0;
  rep(i,n) {
    cin>>s>>d;    
    if(d < a) d = a;
    else if(d > b) d = b;    
    if(s == "West") d *= -1;
    ans += d;
    //cout<<d<<" "<<ans<<endl;
  }
  string ew="East";
  if(ans < 0) {
    ans *= -1;
    ew   ="West";
  }
  if(ans != 0) cout<<ew<<" ";
  cout<<ans<<endl;
}
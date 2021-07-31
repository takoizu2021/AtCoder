#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int a,b;
  cin>>a>>b;
  
  string ans;
  if(0<a&&b==0) ans="Gold";
  else if(0==a&&0<b) ans="Silver";
  else ans="Alloy";
  
  cout<<ans<<endl;
}
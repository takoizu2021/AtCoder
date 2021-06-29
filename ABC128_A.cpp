#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int a,p;
  cin>>a>>p;
  
  p = p + (a*3);
  
  int ans = p/2;
  //if(p/2 > 1) ans = 0;
  cout<<ans<<endl;
}
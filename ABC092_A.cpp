#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  
  a = min(a,b);
  c = min(c,d);
  int ans=a+c;
  cout<<ans<<endl;
}
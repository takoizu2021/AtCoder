#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  
  string ans;
  int i = 0;
  while(0 < a &&0 < c) {
    if(i == 0 || i % 2 == 0) c -= b;
    else a -= d;
      //cout<<i<<" "<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    if(a <= 0) ans = "No";
    else if(c <= 0) ans = "Yes";
    i++;     
  }
  cout<<ans<<endl;
}
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int x,y;
  cin>>x>>y;
  
  if(x == y) cout<<x<<endl;
  
  else if(x == 0) {
    if(y == 1) cout<<2<<endl;
    else cout<<1<<endl;
  }
  else if(x == 1) {
    if(y == 0) cout<<2<<endl;
    else cout<<0<<endl;
  }
  else if(x == 2) {
    if(y == 0) cout<<1<<endl;
    else cout<<0<<endl;
  }
}
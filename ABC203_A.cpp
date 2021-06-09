#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int a,b,c;
  cin>>a>>b>>c;
  
  if(a == b) cout<<c<<endl;
  else if(a == c) cout<<b<<endl;
  else if(b == c) cout<<a<<endl;
  else cout<<0<<endl;
}
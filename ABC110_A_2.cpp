#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int a,b,c;
  cin>>a>>b>>c;
  
  int mx = max({
    10*a + b + c,
    a + 10*b + c,
    a + b + 10*c,
  });
    
  cout<<mx<<endl;
}
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  ll a,b,k;
  cin>>a>>b>>k;
    
  if(a <= k) {
    if(k-a <= b) {
      k = k-a;
      a = 0;
      b -= k;
    }
    else {
     a = 0;
     b = 0; 
    }
  }
  else if(a > k) a -= k;
  
  cout<<a<<" "<<b<<endl;
}
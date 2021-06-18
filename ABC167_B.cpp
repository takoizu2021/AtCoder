#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  ll a,b,c,k;
  cin>>a>>b>>c>>k;
  
  ll sum;
  
  if(a >= k) sum = k;
  else if(a+b >= k) sum = a;  
  else sum = a - (k-(a+b));
  
  cout<<sum<<endl;
}
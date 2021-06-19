#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  ll sum = 0;
  for(int i=1; i<=n; i++) {
    if( !(i%3==0 || i%5==0) ) {
      sum += i;
      //cout<<i<<" "<<endl;
    }
  }
  cout<<sum<<endl;
}
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n,k;
  cin>>n>>k;
  
  vector<int> x(n);
  rep(i,n) cin>>x[i];
  
  int a,b,sum=0;
  rep(i,n) {
    a = x[i]; b = max(x[i],k) - min(x[i],k);
    sum += min(2*a,2*b);
  }
  cout<<sum<<endl;
}
#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int d,n;
  cin>>d>>n;
  
  int ans=0;
  if(n==100) n=101;
  if(d==0) ans=n;
  else if(d==1) ans=100*n;
  else if(d==2) ans=100*100*n;
  
  cout<<ans<<endl;
}
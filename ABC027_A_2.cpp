#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int a,b,c;
  cin>>a>>b>>c;
  
  int ans=0;
  if(a == b) ans=c;
  else if(a == c) ans=b;
  else ans=a;
  
  cout<<ans<<endl;  
}
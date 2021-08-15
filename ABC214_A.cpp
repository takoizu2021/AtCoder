#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int n;
  cin >> n;
  
  int ans;
  if(n<=125) ans=4;
  else if(125<n&&n<=211) ans=6;
  else ans=8;
  
  cout<<ans<<endl;
}
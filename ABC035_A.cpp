#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int w,h;
  cin>>w>>h;
  
  string ans="4:3";
  if(w%16==0 && h%9==0) ans="16:9";
  
  cout<<ans<<endl;
}
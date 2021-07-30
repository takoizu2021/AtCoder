#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int m,d;
  cin>>m>>d;
  
  string ans="NO";
  if(m%d==0) ans="YES";
  
  cout<<ans<<endl;
}
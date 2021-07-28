#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int n,a,b,k;
  cin>>n>>a>>b>>k;
  
  set<int> s;
  s.insert(a);
  s.insert(b);
  int p;
  rep(i,k) {
    cin>>p;
    s.insert(p);
  }
  string ans="YES";
  if(k+2 != s.size()) ans="NO";
  
  cout<<ans<<endl;
}
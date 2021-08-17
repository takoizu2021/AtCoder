#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  set<int> s;
  int a;
  rep(i,n) {
    cin>>a;
    s.insert(a);
  }
  s.erase(*rbegin(s));
  
  int ans=*rbegin(s);
  
  cout<<ans<<endl;
}
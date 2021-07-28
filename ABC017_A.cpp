#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  double s,e;
  
  double ans=0;
  rep(i,3) {
    cin>>s>>e;
    ans += s*(e/10);
  }
  cout<<ans<<endl;
}
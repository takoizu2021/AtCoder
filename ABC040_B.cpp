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
  
  int ans=100000, ct=100000;  
  for(int h=1; h<=n; h++) {
    int w = n/h;
    int ct = abs(h-w) + n%(h*w);
    ans = min(ans,ct);
    //cout<<ans<<endl;
  }
  cout<<ans<<endl;
}
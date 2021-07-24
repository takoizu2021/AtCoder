#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath>
using ll = long long;

int main() {
  int n,t;
  cin>>n>>t;
  
  vector<int> a(n);
  rep(i,n) cin>>a[i];
  
  int ans=0,time=0;
  rep(i,n) {
    if(i != n-1) {
      if(a[i]+t <= a[i+1]) time=t;
      else time = a[i+1] - a[i];
    }
    else time=t;
    ans += time;
  }
  cout<<ans<<endl;
}
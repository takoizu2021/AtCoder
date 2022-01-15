#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000; //10^9
using ll = long long;

int main() {
  int n;
  cin>>n;
  vector<int> h(n);
  rep(i,n) cin>>h[i];
  int ans = h[0];
  rep(i,n-1) {
    if(ans < h[i+1]) ans = h[i+1];
    else break;
  }  
  cout<<ans<<endl;
}
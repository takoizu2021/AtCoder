#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#include <cmath>
const int inf=1000000000;
using ll = long long;

int main() {
  int n,p;
  cin>>n>>p;
  
  vector<int> a(n);
  int ans=0;
  for(int i=0; i<n; ++i) {
    cin>>a[i];
    if(p > a[i]) ++ans;
  }
  
  cout<<ans<<endl;
}
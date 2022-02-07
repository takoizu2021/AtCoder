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
  vector<int> a(n);
  rep(i,n) cin>>a[i];
  
  vector<int> cut;
  cut.push_back(0);
  int sum=0;
  rep(i,n) {
    sum += a[i];
    cut.push_back(sum%360);
  }
  cut.push_back(360);
  sort(cut.begin(), cut.end());
  
  int ans=0;
  int p=0;
  for(auto x : cut) {
    ans = max(ans,x-p);
    p = x;
  }
  
  cout<<ans<<endl;
}
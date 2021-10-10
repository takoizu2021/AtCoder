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
  int n;
  cin>>n;
  vector<int> p(n+1);
  for(int i=1; i<=n; ++i) cin>>p[i];
  
  vector<int> q(n+1);
  for(int i=1; i<=n; ++i) q[p[i]] = i;
  for(int i=1; i<=n; ++i) cout<<q[i]<<" ";
  cout<<endl;  
}
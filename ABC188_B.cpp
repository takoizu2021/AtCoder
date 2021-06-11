#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  int n;
  cin>>n;
  
  vector<int> a(n);
  vector<int> b(n);
  rep(i,n) cin>>a[i];
  rep(i,n) cin>>b[i];
  
  int ans = 0;
  rep(i,n) ans += a[i] * b[i];
  
  if(ans == 0) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}  
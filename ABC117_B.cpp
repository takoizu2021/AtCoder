#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  vector<int> l(n);
  rep(i,n) cin>>l[i];
  
  sort(l.begin(),l.end());
  
  int tot=0;
  rep(i,n-1) tot += l[i];
  
  string ans = "No";
  if(tot > l[n-1]) ans = "Yes";
  
  //cout<<tot<<" "<<l[n-1]<<endl;
  cout<<ans<<endl;
}
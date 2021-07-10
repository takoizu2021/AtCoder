#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n,x;
  cin>>n>>x;
  
  vector<int> a(n+1);
  rep2(i,1,n+1) cin>>a[i];
  
  int sum=0;
  rep2(i,1,n+1) {
    if(i%2==0) a[i]--;
    sum += a[i];
  }
  //cout<<sum<<endl;
  string ans = "No";
  if(sum <= x) ans = "Yes";
  
  cout<<ans<<endl;
}
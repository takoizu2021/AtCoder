#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n,m;
  cin>>n>>m;
  
  vector<int> a(n);
  double sum=0;
  rep(i,n) {
    cin>>a[i];
    sum += a[i];
  }

  int ct=0;
  string ans="No";
  rep(i,n) {
    if (a[i] >= sum/(4*m)) ct++;
    if(ct == m) {
      ans="Yes";
      break;
    }
  }
  cout<<ans<<endl;
}
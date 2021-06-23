#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n,k,m;
  cin>>n>>k>>m;
  
  int sum=0;
  vector<int> a(n-1);
  rep(i,n-1) {
    cin>>a[i];
    sum += a[i];
  }
  
  int hei_t = n * m;
  int ans = 0;
  if(hei_t >= sum) ans = hei_t - sum;
  if(ans > k) ans = -1;
  
  cout<<ans<<endl;  
}
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  vector<int> a(3);
  cin>>a[0]>>a[1]>>a[2];
  
  sort(a.begin(),a.end());
  
  int ans = a[1] + a[2];
  
  cout<<ans<<endl;
}
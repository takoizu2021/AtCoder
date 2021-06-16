#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  vector<int> a(n);
  rep(i,n) cin>>a[i];
  
  sort(a.begin(),a.end());
  
  string ans ="Yes";
  rep(i,n) {
    if(a[i] != i+1) ans = "No";
  }
  cout<<ans<<endl;
}
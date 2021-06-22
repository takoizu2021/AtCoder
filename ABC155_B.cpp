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
  
  string ans = "APPROVED";
  bool chk = false;
  rep(i,n) {
    if(a[i] % 2 == 0) {
      if(a[i] % 3 !=0&&a[i] % 5 !=0) chk = true;
    }
  }
  if(chk) ans = "DENIED";
  cout<<ans<<endl;
}
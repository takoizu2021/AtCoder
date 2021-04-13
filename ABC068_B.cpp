#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin >> n;
  
  int ct = 0;
  int ct_max = 0;
  int ans = 1;
  rep2(i,1,n+1) {
    int a = i;
    while(a > 0) {
      if(a % 2 == 0) a /= 2;
      else break;
      ct++;
    }
    if(ct_max < ct) {
      ct_max = ct;
      ans = i;
    }
    ct = 0;
  }
  cout<<ans<<endl;
}
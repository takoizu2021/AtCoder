#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin>>n;
  
  double a, ct=0;
  rep(i,n) {
    cin>>a;
    ct += 1/a;
  }
  double ans = 1/ct;
  
  cout << fixed << setprecision(6);  
  cout << ans << endl;
  
}
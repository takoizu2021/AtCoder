#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#include <cmath> //”ŠwŠÖ”
using ll = long long;

int main() {
  int n;
  cin >> n;
  
  int ans = 1;
  for(int i=1;i*i<=n;i++) ans = max(ans,i*i);
  cout << ans << endl;
}
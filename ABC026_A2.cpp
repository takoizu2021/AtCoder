#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  int a;
  cin >> a;
  int ans = 0;
  rep(x, a + 1){
    int y = a - x;
    ans = max(ans,x * y);
  }
  cout << ans << endl; 
}
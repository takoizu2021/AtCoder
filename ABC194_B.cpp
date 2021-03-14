#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = int64_t;

int main() {
  int n;
  cin >> n;
  
  vector<int> wa(n);
  vector<int> wb(n);
  
  //in
  rep(i,n) {
    cin >> wa[i] >> wb[i];
  }
  
  //ç≈è¨ÇÃédéñ
  int ans = 100100100;
  rep(i,n) {
    rep(j,n) {
      if   (i != j) {
        ans = min(ans,max(wa[i],wb[j]));
      }
      else {
        ans = min(ans,wa[i] + wb[i]);
      }
    }
  }

  cout << ans << endl;  
}  